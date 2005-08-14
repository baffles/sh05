// connectionudp.cpp
//  Connection class for UDP

#include <iostream>
#include <algorithm>
#include <sstream>
#include "plat.h"
#include "enet/enet.h"
#include "connectionudp.h"
#include "abg.h"

using namespace std;

ConnectionUDP::ConnectionUDP(): sock(0), connected(false), error(false)
{
}

ConnectionUDP::~ConnectionUDP()
{
	Disconnect();
}

bool ConnectionUDP::Connect(const string& host, int port)
{
	int upspeed = atoi(Ini::GetString(settings, "udp", "ups", "0").c_str()) / 8;
	int downspeed = atoi(Ini::GetString(settings, "udp", "downs", "0").c_str()) / 8;
	ENetAddress address;
	ENetEvent event;
	
	if((sock = enet_host_create(NULL, 1, downspeed, upspeed)) == NULL)
	{
		strerror = "Couldn't create an enet client.";
		error = true;
		return false;
	}
	
	enet_address_set_host(&address, host.c_str());
	address.port = port;
	
	peer = enet_host_connect(sock, &address, 2); // that 2 means make 2 channels
	
	if(peer == NULL)
	{
		strerror = "No avaliable peers for initiation.";
		error = true;
		return false;
	}
	
	if(!(enet_host_service(sock, &event, 5000) > 0 && event.type == ENET_EVENT_TYPE_CONNECT))
	{
		enet_peer_reset(peer);
		stringstream s;
		s << "Connection to " << host << ":" << port << " failed.";
		strerror = s.str();
		error = true;
		return false;
	}

	connected = true;
	
#	if TRACE_TRANSACTION
	cerr << (int) pthread_self() << " Connected" << endl;
#	endif

	return true;
}

void ConnectionUDP::Disconnect()
{
	ENetEvent event;
	
	enet_peer_disconnect(&sock-> peers[0]);

	while(enet_host_service(sock, &event, 3000) > 0)
	{
		switch(event.type)
		{
			case ENET_EVENT_TYPE_RECEIVE:
				enet_packet_destroy(event.packet);
				break;

			case ENET_EVENT_TYPE_DISCONNECT:
				return;
			
			case ENET_EVENT_TYPE_NONE:
			case ENET_EVENT_TYPE_CONNECT:
			default:
				break;
		}
	}
	
	/* We've arrived here, so the disconnect attempt didn't */
	/* succeed yet.  Force the connection down.             */
	enet_peer_reset (&sock->peers[0]);
		
	enet_host_destroy(sock);
#	if TRACE_TRANSACTION
	cerr << (int) pthread_self() << " Disconnected" << endl;
#	endif
	connected = false;
}

bool ConnectionUDP::Recv(void* buf, size_t len, bool wait)
{
	ENetEvent event;
	bool havedata = false;
	
	if(wait)
	{
		while(1)
		{
			int enr = enet_host_service(sock, &event, 1000);
			if(enr > 0)
			{
				havedata = true;
				break; // go process
			}
			if(enr < 0)
			{
				// error
				strerror = "Error getting a packet from enet_host_service";
				Disconnect();
				error = true;
				return false;
			}
		}
	}
	else
	{
		int enr = enet_host_service(sock, &event, 0);
		if(enr > 0)
			havedata = true;
		if(enr < 0)
		{
			strerror = "Error getting a packet from enet_host_service";
			Disconnect();
			error = true;
			return false;
		}
	}
	
	if(havedata)
	{
		if(event.type == ENET_EVENT_TYPE_RECEIVE)
		{
			memcpy(buf, event.packet->data, ((event.packet->dataLength > len) ? len : event.packet->dataLength));
			return true;
		}
	}
	
	return false;
}

bool ConnectionUDP::Send(const void* buf, size_t len)
{
	ENetPacket *packet = enet_packet_create(buf, len, ENET_PACKET_FLAG_RELIABLE);
	
	enet_peer_send(peer, 0, packet); // that 0 is the channel
	enet_host_flush(sock);
	
	return true;
}

// The end
