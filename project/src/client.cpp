// client.h
//  Client system

#include "client.h"
#include "abg.h"

#include <iostream>
#include <fstream>

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
}

Client::~Client()
{
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
	enet_host_destroy(client);
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
		return true;
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


bool Client::Send(ENetPeer *p, string data, UDPChannel chan)
{
	ENetPacket *packet = enet_packet_create(data.c_str(), data.length(), ENET_PACKET_FLAG_RELIABLE);
	
	enet_peer_send(p, chan, packet);
	
	enet_host_flush(client);
	return true;
}


EStatus Client::Tick(double dtime)
{
	if(ClientTick())
		return S_Continue;
	else
	{
		Finish();
		return S_Finished;
	}
}

bool Client::ClientTick()
{
	ENetEvent event;
	
	while(enet_host_service(client, &event, 1000) > 0)
	{
		if(event.type == ENET_EVENT_TYPE_DISCONNECT)
		{
			// disconnection
			enet_host_destroy(client);
			return false;
		}
		
		if(event.type == ENET_EVENT_TYPE_RECEIVE)
		{
			// data
			stringstream data((char *)event.packet->data);
			
			string cmd;
			data >> cmd;
			if(event.channelID == CSystem)
			{
				if(cmd == "Reg")
				{
					string name;
					int id;
					
					if(data.peek() != ':') // should be id
						data >> id;
					
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
					
					data >> id;
					
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
					
					data >> id;
					
					if(data.peek() == ':')
					{
						data.get();
						stringbuf temp;
						data.get(temp);
						reason = temp.str();
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
					data >> id;
					OnJoin(id);
				}
				if(cmd == "Leave")
				{
					int id;
					data >> id;
					OnLeave(id);
				}
				
				if(cmd == "Mov")
				{
					int id, nx, ny;
					
					data >> id;
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
					
					data >> fromid;
					
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
	return S_Continue;
}


// System
void Client::OnRegisterConfirm(int id, string name)
{
}

void Client::OnBoot(string reason)
{
}


void Client::OnNew(int id, string name)
{
}

void Client::OnQuit(int id, string reason)
{
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
}

// Chat
void Client::OnMsg(int id, string message)
{
}


// The end
