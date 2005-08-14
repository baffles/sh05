// client.h
//  Client system

#include <iostream>
#include <fstream>

#include "plat.h"
#include "client.h"
#include "abg.h"
#include "game.h"

#ifndef _WIN32
int timeGetTime()
{
	struct timeval t;
	gettimeofday(&t, NULL);
	return t.tv_usec / 1000;
}
#endif

using namespace std;

bool Client::GlobalInit()
{
	if(enet_initialize() != 0)
	{
		cerr << "Error initializing client networking system" << endl;
		return false;
	}
	return true;
}

void Client::GlobalClose()
{
	enet_deinitialize();
}


Client::Client(string host, int port)
{
	client = NULL;
	peer = NULL;
	enet_address_set_host(&address, host.c_str());
	address.port = port;
	lag = 0;
	progress = 0;
	connected = false;
}

Client::~Client()
{
	if(Game::local->client == this)
		Game::local->client = NULL;
	if(connected)
	{
		connected = false;
		ENetEvent event;
		
		enet_peer_disconnect(&client->peers[0]);
		
		// 3 seconds to disconnect before we force it
		while(enet_host_service(client, &event, 3000) > 0)
		{
			switch(event.type)
			{
				case ENET_EVENT_TYPE_RECEIVE:
					enet_packet_destroy(event.packet);
					break;
				
				case ENET_EVENT_TYPE_DISCONNECT:
					enet_host_destroy(client);
					return;
				
				case ENET_EVENT_TYPE_NONE:
				case ENET_EVENT_TYPE_CONNECT:
				default:
					break;
			}
		}
		
		// welp, we have to force it :(
		enet_peer_reset(&client->peers[0]);
	}
}

void Client::CheckValid()
{
	GameState::CheckValid();
	TRACE_ASSERT(client);
	TRACE_ASSERT(peer);
}

void Client::Dump(ostream& str)
{
	GameState::Dump(str);
	str << TRACE_VAR(client) << TRACE_VAR(peer) << TRACE_VAR(lag);
}

bool Client::Send(ENetPeer *p, string data, UDPChannel chan)
{
	ENetPacket *packet = enet_packet_create(data.c_str(), data.length(), ENET_PACKET_FLAG_RELIABLE);
	
	enet_peer_send(p, chan, packet);
	
	enet_host_flush(client);
	return true;
}

EStatus Client::Tick(double dtime)
{
	EStatus s = GameState::Tick(dtime);
	if(s != S_Continue) return s;
	
	progress += dtime;
	if(progress > 3)
	{
		Ping();
		progress -= 3;
	}
	
	ENetEvent event;
	
	while(enet_host_service(client, &event, 0) > 0)
	{
		if(event.type == ENET_EVENT_TYPE_DISCONNECT)
		{
			// disconnection
			connected = false;
			enet_host_destroy(client);
			Finish();
			return S_Finished;
		}
		
		if(event.type == ENET_EVENT_TYPE_RECEIVE)
		{
			// data
			stringstream data;
			data.write((char *)event.packet->data, event.packet->dataLength);
			cerr << data.str();
			// debug
			//cout << "Packet (len " << event.packet->dataLength << ") channel " << (unsigned int)event.channelID << " contents: " << data.str();
			
			string cmd;
			ws(data);
			data >> cmd;
			if(event.channelID == CSystem)
			{
				if(cmd == "Reg")
				{
					string name;
					int id;
					
					ws(data);
					if(data.peek() != ':') // should be id
						data >> id;
					
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
					
					OnRegisterConfirm(id, name);
				}
				if(cmd == "Boot")
				{
					string reason;
					
					ws(data);
					if(data.peek() != ':') // one word reason
						data >> reason;
					else
					{
						data.get();
						stringbuf temp;
						data.get(temp);
						reason = temp.str();
					}
					
					OnBoot(reason);
				}
				
				if(cmd == "New");
				{
					int id;
					string name;
					
					ws(data);
					data >> id;
					
					ws(data);
					if(data.peek() != ':')
						data >> name;
					else
					{
						data.get();
						stringbuf temp;
						data.get(temp);
						name = temp.str();
					}
					
					OnNew(id, name);
				}
				if(cmd == "Quit")
				{
					int id;
					string reason;
					
					stringbuf temp1;
					data.get(temp1);
					cout << "This is left of it: " << temp1.str();
					stringbuf temp;
					data.get(temp);
					cout << "This is left of it: " << temp.str();
					
					ws(data);
					data >> id;
					
					//ws(data); // Booted(system(Excess Flood))
					cout << "PEEK! " << data.peek() << endl;
					if(data.peek() == ':')
					{
						data.get();
						stringbuf temp;
						data.get(temp);
						reason = temp.str();
						cout << "Hmm = " << temp.str() << endl;;
					}
					else
						data >> reason;
					
					
					OnQuit(id, reason);
				}
			}
			else if(event.channelID == CGame)
			{
				if(cmd == "Join")
				{
					int id;
					ws(data);
					data >> id;
					OnJoin(id);
				}
				if(cmd == "Leave")
				{
					int id;
					ws(data);
					data >> id;
					OnLeave(id);
				}
				
				if(cmd == "Mov")
				{
					int id, nx, ny;
					
					ws(data);
					data >> id;
					ws(data);
					data >> nx; data.get(); data >> ny;
					
					OnMove(id, nx, ny);
				}
				
				if(cmd == "Upd")
				{
					// not here yet
				}
				
				if(cmd == "Sti")
				{
					int score, health, x, y, flags, state, serverstate, timeleft;
					
					ws(data);
					data >> score >> health >> x; data.get(); data >> y >> flags >> state >> serverstate >> timeleft;
					
					OnStatusUpdate(score, health, x, y, flags, state, serverstate, timeleft);
				}
			}
			else if(event.channelID == CMisc)
			{
				if(cmd == "Pong")
				{
					string lb;
					
					stringbuf temp;
					ws(data);
					data.get(temp);
					lb = temp.str();
					
					OnPong(lb);
				}
			}
			else if(event.channelID == CChat)
			{
				if(cmd == "Msg")
				{
					int fromid;
					string msg;
					
					ws(data);
					data >> fromid;
					
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
					
					OnMsg(fromid, msg);
				}
			}
			else
			{
				// do something???
			}
			enet_packet_destroy(event.packet);
		}
	}
	
	return s;
}

bool Client::InitLogic()
{
	int upspeed = atoi(Ini::GetString(settings, "udp", "ups", "0").c_str()) / 8;
	int downspeed = atoi(Ini::GetString(settings, "udp", "downs", "0").c_str()) / 8;
	
	client = enet_host_create(NULL, 1, downspeed, upspeed);
	if(client == NULL)
	{
		cerr << "An error occured while creating a client instance." << endl;
		return false;
	}
	
	peer = enet_host_connect(client, &address, CNumChans);
	
	if(peer == NULL)
	{
		cerr << "No avaliable peers for connection." << endl;
		return false;
	}
	
	// give it 5 seconds to connect
	ENetEvent event;
	if(enet_host_service(client, &event, 5000) > 0 && event.type == ENET_EVENT_TYPE_CONNECT)
	{
		connected = true;
		return true;
	}
	else
	{
		char host[512];
		if(enet_address_get_host(&address, host, 512) == 0)
			cerr << "Connection to " << host << ":" << address.port << " failed." << endl;
		else
			cerr << "Connection failed." << endl;
		
		enet_peer_reset(peer);
	}
	
	return false;
}

// Send Handlers
void Client::Register(std::string name, std::string password)
{
	stringstream s;
	s << "Reg ";
	if(password != "")
		s << password << " ";
	s << ":" << name << endl;
	
	Send(peer, s.str(), CSystem);
}

void Client::Join()
{
	stringstream s;
	s << "Join" << endl;
	
	Send(peer, s.str(), CGame);
}

void Client::Leave()
{stringstream s;
	s << "Leave" << endl;
	
	Send(peer, s.str(), CGame);
}

void Client::Move(int x, int y)
{
	stringstream s;
	s << "Req " << x << "," << y<< endl;
	
	Send(peer, s.str(), CGame);
}

void Client::StatusUpdate()
{
	stringstream s;
	s << "Sti" << endl;
	
	Send(peer, s.str(), CGame);
}

void Client::Ping()
{
	stringstream s;
	s << "Ping " << timeGetTime() << endl;
	
	Send(peer, s.str(), CMisc);
}

void Client::Msg(std::string message, std::string dest)
{
	stringstream s;
	s << "Msg " << dest << " :" << message << endl;
	
	Send(peer, s.str(), CChat);
}


// Recieve Handlers
// System
void Client::OnRegisterConfirm(int id, string name)
{
	TRACE_ASSERT(Game::local);
	TRACE_ASSERT(Game::local->localpawn);
	Game::local->localpawn->pnum = id;
	cout << "I am " << name << ", player " << id << endl;
}

void Client::OnBoot(string reason)
{
	cout << "-- Booted with reason " << reason << endl;
}


void Client::OnNew(int id, string name)
{
	TRACE_ASSERT(Game::local);
	TRACE_ASSERT(Game::local->localpawn);
	if(id == Game::local->localpawn->pnum)
		return;
	Pawn* p = new Pawn(id);
	p->instance = Character::GetByName("CGamesPlay");
	GGame->AddPlayer(p);
	cout << "-- " << name << " joined the game (" << id << ")" << endl;
}

void Client::OnQuit(int id, string reason)
{
	cout << "<-- " << id << " Quit (" << reason << ")" << endl;
}

// Game
void Client::OnJoin(int id)
{
}

void Client::OnLeave(int id)
{
}

void Client::OnMove(int id, int x, int y)
{
}

void Client::OnStatusUpdate(int score, int health, int x, int y, int flags, int state, int serverstate, int timeleft)
{
}

// Misc
void Client::OnPong(string pd)
{
	lag = timeGetTime() - atol(pd.c_str());
}

// Chat
void Client::OnMsg(int id, string message)
{
	cout << "<" << id << "> " << message << endl;
}


// The end
