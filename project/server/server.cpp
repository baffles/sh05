// server.cpp
//  Server class

#include <iostream>

#include "server.h"
#include "bullet.h"

using namespace std;

Server::Server(int port)
{
	address.host = ENET_HOST_ANY;
	address.port = port;
	
	server = enet_host_create(&address, 32, 0, 0); // 32 users, "unlimited" bandwidth
}

Server::~Server()
{
	enet_host_destroy(server);
}


bool Server::Send(ENetPeer *p, string data, UDPChannel chan, bool broadcast, bool reliable)
{
	cout << "<--Packet (len " << data.length() << ") channel " << chan << " contents: " << data;
	ENetPacket *packet;
	if(reliable)
		packet = enet_packet_create(data.c_str(), data.length(), ENET_PACKET_FLAG_RELIABLE);
	else
		packet = enet_packet_create(data.c_str(), data.length(), 0);
	
	if(broadcast)
		enet_host_broadcast(server, chan, packet);
	else
		enet_peer_send(p, chan, packet);
	
	enet_host_flush(server);
	return true;
}

void Server::Boot(UserData& usr, string reason)
{
	stringstream s;
	s << "Boot :" << reason << endl;
	Send(usr.peer, s.str(), CSystem);
	
	s.str("");
	s << "Quit " << usr.user->pawn->pnum << " :Booted(system(" << reason << "))" << endl;
	Send(NULL, s.str(), CSystem, true);
	
	enet_peer_disconnect(usr.peer);
}


bool Server::InitLogic()
{
	game = new GameInfo;
	AddManagedChild(game);
	
	return true;
}


EStatus Server::Tick(double dtime)
{
	ServerTick();
	
	return S_Continue;
}

void Server::ServerTick()
{
	ENetEvent event;
	
	while(enet_host_service(server, &event, 1000) > 0)
	{
		if(event.type == ENET_EVENT_TYPE_CONNECT)
		{
			// new client
			ServerUser *newuser = new ServerUser;
			newuser->registered = false;
			cout << "users.size() = " << users.size() << endl;
			newuser->pawn = new Pawn(users.size() + 1);
			newuser->messageinfo.timeval = time(NULL);
			newuser->messageinfo.count = newuser->messageinfo.kept = newuser->messageinfo.dropped = 0;
			users.push_back(newuser);
			game->AddPlayer(newuser->pawn);
			
			event.peer->data = (void *)users.back();
			
			cout << "Connection from " << event.peer->address.host << ":" << event.peer->address.port << endl;
		}
		if(event.type == ENET_EVENT_TYPE_DISCONNECT)
		{
			// disconnection
			/*for(list<ServerUser>::iterator i = users.begin(); i != users.end(); i++)
			{
				if(i->pawn->pnum == ((ServerUser *)event.peer->data)->pawn->pnum)
				{
					delete i->pawn;
					users.erase(i);
					break;
				}
			}*/
			if(((ServerUser*)event.peer->data)->registered)
			{
				UserData ud;
				ud.user = (ServerUser*)event.peer->data;
				OnQuit(ud, "Client Quit");
			}
			
			users.remove((ServerUser*)event.peer->data);
			game->DelPlayer(((ServerUser*)event.peer->data)->pawn);
			delete (ServerUser*)event.peer->data;
			event.peer->data = NULL;
			
			cout << "Disconnected.." << endl;
		}
		
		if(event.type == ENET_EVENT_TYPE_RECEIVE)
		{
			// data
			stringstream data;
			data.write((char *)event.packet->data, event.packet->dataLength);
			// debug
			cout << "-->Packet (len " << event.packet->dataLength << ") channel " << (unsigned int)event.channelID << " contents: " << data.str();
			
			ServerUser *usr = (ServerUser *)event.peer->data;
			UserData ud;
			ud.user = usr;
			ud.peer = event.peer;
			
			string cmd;
			ws(data);
			data >> cmd;
			if(event.channelID == CSystem)
			{
				if(cmd == "Reg")
				{
					string name, password;
					ws(data);
					if(data.peek() != ':') // should be a password
						data >> password;
					
					ws(data);
					if(data.peek() != ':') // one word name....
						data >> name;
					else
					{
						data.get();
						stringbuf temp;
						data.get(temp);
						name = temp.str();
					}
					
					OnRegister(ud, name, password);
				}
				
				if(cmd == "Quit")
				{
					string reason;
					ws(data);
					if(data.peek() == ':')
					{
						data.get();
						stringbuf temp;
						data.get(temp);
						reason = temp.str();
					}
					else
						reason = "User quit";
					
					OnQuit(ud, reason);
				}
			}
			else if(event.channelID == CGame)
			{
				if(cmd == "Join")
				{
					OnJoinGame(ud);
				}
				if(cmd == "Leave")
				{
					OnLeaveGame(ud);
				}
				if(cmd == "Req")
				{
					int x, y;
					ws(data);
					data >> x; data.get(); data >> y;
					OnRequestMove(ud, x, y);
				}
				if(cmd == "Sti")
				{
					OnRequestStateInfo(ud);
				}
				if(cmd == "Upd")
				{
					int pstate, face, spritestate, jumptime, xs, x, y, score, health, place, ammo;
					ws(data);
					data >> pstate >> face >> spritestate >> jumptime >> xs >> x >> y >> score >> health >> place >> ammo;
					OnUpdate(ud, pstate, face, spritestate, jumptime, xs, x, y, score, health, place, ammo);
				}
				if(cmd == "BulletShoot")
				{
					int id, x, y, xs, ys;
					ws(data);
					data >> id >> x >> y >> id >> x >> y >> xs >> ys;
				}
			}
			else if(event.channelID == CMisc)
			{
				if(cmd == "Ping")
				{
					string lb;
					stringbuf temp;
					ws(data);
					data.get(temp);
					lb = temp.str();
					
					OnPing(ud, lb);
				}
			}
			else if(event.channelID == CChat)
			{
				if(cmd == "Msg")
				{
					string dest, msg;
					ws(data);
					if(data.peek() != ':')
						data >> dest;
					else
						dest = "chat";
					
					ws(data);
					if(data.peek() != ':')
						data >> msg;
					else
					{
						data.get();
						stringbuf temp;
						data.get(temp);
						msg = temp.str();
					}
					
					OnMsg(ud, dest, msg);
				}
			}
			else
			{
				// do something???
			}
			enet_packet_destroy(event.packet);
		}
	}
}


// System stuff
void Server::OnRegister(UserData& usr, string name, string pass)
{
	usr.user->registered = true;
	usr.user->name = name;
	usr.user->password = pass;
	usr.user->pawn->name = name;
	
	TRACE_ASSERT(usr.usr);
	TRACE_ASSERT(usr.usr->pawn);
	
	stringstream s;
	s << "Reg " << usr.user->pawn->pnum << " :" << name << endl;
	Send(usr.peer, s.str(), CSystem);
	
	s.str("");
	s << "New " << usr.user->pawn->pnum << " :" << name << endl;
	Send(NULL, s.str(), CSystem, true);
	s.str("");
	s << "Join " << usr.user->pawn->pnum << endl;
	Send(NULL, s.str(), CGame, true);
	
	cout << "Registration " << name << " reply: " << s.str();
	
	for(list<ServerUser*>::iterator i = users.begin(); i != users.end(); i++)
	{
		if((*i)->pawn->pnum != usr.user->pawn->pnum)
		{
			s.str("");
			s << "New " << (*i)->pawn->pnum << " :" << (*i)->pawn->name << endl;
			Send(usr.peer, s.str(), CSystem);
			s.str("");
			s << "Join " << (*i)->pawn->pnum << endl;
			Send(usr.peer, s.str(), CGame);
			s.str("");
			cout << " - Pawn: " << (*i)->pawn << endl;
			s << "Upd " << (*i)->pawn->pnum << " " << (*i)->pawn->pstate << " " << (*i)->pawn->face << " " << (*i)->pawn->spritestate << " " << (*i)->pawn->jumptime << " " << (*i)->pawn->xs << endl;
			Send(usr.peer, s.str(), CGame);
		}
	}
}

void Server::OnQuit(UserData& usr, string reason)
{
	usr.user->registered = false;
	
	stringstream s;
	s << "Quit " << usr.user->pawn->pnum << " :" << reason << endl;
	Send(NULL, s.str(), CSystem, true);
}

// Game stuff
void Server::OnJoinGame(UserData& usr)
{
	// add a check here to only let them join at the right time, blah blah blah
	
	stringstream s;
	s << "Join " << usr.user->pawn->pnum << endl;
	Send(NULL, s.str(), CGame, true);
}

void Server::OnLeaveGame(UserData& usr)
{
	// remove them blah blah
	
	stringstream s;
	s << "Leave " << usr.user->pawn->pnum << endl;
	Send(NULL, s.str(), CGame, true);
}

void Server::OnRequestMove(UserData& usr, int x, int y)
{
	// update their vars and check for a collission
	
	stringstream s;
	s << "Mov " << usr.user->pawn->pnum << " " << x << "," << y << endl;
	Send(NULL, s.str(), CGame, true);
}

void Server::OnRequestStateInfo(UserData& usr)
{
	// get state info
	
	stringstream s;
	s << "Sti 0 0 0,0 0 0 0 0" << endl;
	Send(usr.peer, s.str(), CGame);
}

void Server::OnUpdate(UserData& usr, int pstate, int face, int spritestate, int jumptime, int xs, int x, int y, int score, int health, int place, int ammo)
{
	// Upd = update info - "Upd <pstate> <face> <spritestate> <jumptime> <xs>" [game]
	usr.user->pawn->pstate = (EPawnState)pstate;
	usr.user->pawn->face = (EDirection)face;
	usr.user->pawn->spritestate = (EState)spritestate;
	usr.user->pawn->jumptime = jumptime;
	usr.user->pawn->xs = xs;
	
	stringstream s;
	s << "Upd " << usr.user->pawn->pnum << " " << pstate << " " << face << " " << spritestate << " " << jumptime << " " << xs << " " << x << " " << y << " " << score << " " << health << " " << place << " " << ammo << endl;
	Send(NULL, s.str(), CGame, true, false);
	cout << "Sending Update" << endl;
}

void Server::OnBulletShoot(UserData& usr, int id, int x, int y, int xs, int ys)
{
	Bullet *b; // BulletShoot = new bullet - "BulletShoot <id> <shooterid> <x> <y> <xs> <ys>" [game]
	b = new Bullet;
	b->id = id;
	b->x = x;
	b->y = y;
	b->xs = xs;
	b->ys = ys;
	b->sender = usr.user->pawn;
	
	game->AddObject(b);
	
	stringstream s;
	s << "BulletShoot " << b->id << " " << usr.user->pawn->pnum << " " << x << " " << y << " " << xs << " " << ys << endl;
	Send(NULL, s.str(), CGame, true);
}


// Misc stuff
void Server::OnPing(UserData& usr, string pingdata)
{
	stringstream s;
	s << "Pong " << pingdata << endl;
	Send(usr.peer, s.str(), CMisc);
	
	cout << "Got ping, sending pong: " << s.str();
}

// Chat Stuff
void Server::OnMsg(UserData& usr, string dest, string msg)
{
	//cout << "Rate throttler info: Timeval: " << usr.user->messageinfo.timeval << " <? " << (time(NULL) - MSG_S) << " [MSG_S = " << MSG_S << " MSG_C = " << MSG_C << "]" << endl;
	if(usr.user->messageinfo.timeval < (time(NULL) - MSG_S))
	{
		usr.user->messageinfo.timeval = time(NULL);
		usr.user->messageinfo.count = 0;
	}
	
	if(usr.user->messageinfo.count++ > MSG_C)
	{
		usr.user->messageinfo.dropped++;
		if(((double)usr.user->messageinfo.dropped / (double)usr.user->messageinfo.kept) > MSG_KF)
			Boot(usr, "Excess Flood");
		return;
	}
	
	usr.user->messageinfo.kept++;
	stringstream s;
	s << "Msg " << usr.user->pawn->pnum << " :" << msg << endl;
	Send(NULL, s.str(), CChat, true);
}

// The end
