// client.h
//  Client system

#include "client.h"

Client::Client(string host, int port)
{
	client = NULL;
	peer = NULL;
}

Client::~Client()
{
	ENetEvent event;
	
	enet_peer_disconnect(&client->peers[0]);
	
	// 3 seconds to disconnect before we force it
	while(enet_host_service(client, &event, 3000) > 0)
	{
		switch(event.eventtype)
		{
			case ENET_EVENT_TYPE_RECIEVE:
				enet_packet_destroy(event.packet);
				break;
			case ENET_EVENT_TYPE_DISCONNECT:
				enet_host_destroy(client);
				return;
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
	enet_address_set_host(&address, host.c_str());
	address.port = port;
	
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
	if(enet_host_service(client, &event, 5000) > 0 && event.type = ENET_EVENT_TYPE_CONNECT)
		return true;
	else
	{
		char host[512];
		if(enet_address_get_host(&address, host, 512) == 0)
			cerr << "Connection to " << address << ":" << address.port << " failed." << endl;
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


EStatus Server::Tick(double dtime)
{
	if(ClientTick())
		return S_Continue;
	else
	{
		Finish();
		return S_Finished;
	}
}

bool Server::ClientTick()
{
	ENetEvent event;
	
	while(enet_host_service(server, &event, 1000) > 0)
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
					
					OnBoot(string reason);
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
					
					OnMsg(id, msg);
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

// The end
