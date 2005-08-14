// server.cpp
//  Server class

#include "server.h"

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


bool Server::Send(ENetPeer *p, string data, UDPChannel chan, bool broadcast)
{
	ENetPacket *packet = enet_packet_create(data.c_str(), data.length(), ENET_PACKET_FLAG_RELIABLE);
	
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
			ServerUser newuser;
			newuser.registered = false;
			newuser.pawn = new Pawn(users.size() + 1);
			newuser.messageinfo.timeval = time(NULL);
			newuser.messageinfo.count = newuser.messageinfo.kept = newuser.messageinfo.dropped = 0;
			users.push_back(newuser);
			
			event.peer->data = (void *)&users.back();
		}
		if(event.type == ENET_EVENT_TYPE_DISCONNECT)
		{
			// disconnection
			for(list<ServerUser>::iterator i = users.begin(); i != users.end(); i++)
			{
				if(i->pawn->pnum == ((ServerUser *)event.peer->data)->pawn->pnum)
				{
					delete i->pawn;
					users.erase(i);
					break;
				}
			}
			event.peer->data = NULL;
		}
		
		if(event.type == ENET_EVENT_TYPE_RECEIVE)
		{
			// data
			stringstream data((char *)event.packet->data);
			ServerUser *usr = (ServerUser *)event.peer->data;
			UserData ud;
			ud.user = usr;
			ud.peer = event.peer;
			
			string cmd;
			data >> cmd;
			if(event.channelID == CSystem)
			{
				if(cmd == "Reg")
				{
					string name, password;
					if(data.peek() != ':') // should be a password
						data >> password;
					
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
					data >> x; data.get(); data >> y;
					OnRequestMove(ud, x, y);
				}
				if(cmd == "Sti")
				{
					OnRequestStateInfo(ud);
				}
			}
			else if(event.channelID == CMisc)
			{
				if(cmd == "Ping")
				{
					string lb;
					stringbuf temp;
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
					if(data.peek() != ':')
						data >> dest;
					else
						dest = "chat";
					
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
	//usr.user->pawn->name = name;
	
	stringstream s;
	s << "Reg " << usr.user->pawn->pnum << " :" << name << endl;
	Send(usr.peer, s.str(), CSystem);
	
	s.str("");
	s << "New " << usr.user->pawn->pnum << " :" << name << endl;
	Send(NULL, s.str(), CSystem, true);
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

// Misc stuff
void Server::OnPing(UserData& usr, string pingdata)
{
	stringstream s;
	s << "PONG " << pingdata << endl;
	Send(usr.peer, s.str(), CMisc);
}

// Chat Stuff
void Server::OnMsg(UserData& usr, string dest, string msg)
{
	if(usr.user->messageinfo.timeval < (time(NULL) - MSG_S))
	{
		usr.user->messageinfo.timeval = time(NULL);
		usr.user->messageinfo.count = 0;
	}
	
	if(usr.user->messageinfo.count > MSG_C)
	{
		usr.user->messageinfo.dropped++;
		if(((double)usr.user->messageinfo.dropped / (double)usr.user->messageinfo.kept) > MSG_KF)
			Boot(usr, "Excess Flood");
		return;
	}
	
	usr.user->messageinfo.kept++;
	stringstream s;
	s << "MSG " << usr.user->pawn->pnum << " :" << msg << endl;
	Send(NULL, s.str(), CChat, true);
}

// The end
