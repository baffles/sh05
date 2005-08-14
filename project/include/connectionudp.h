// connectionudp.h
//  Connection class for UDP

#ifndef CONNECTIONUDP_H_INCLUDED
#define CONNECTIONIDP_H_INCLUDED

#include "plat.h"
#include "connection.h"
#include "enet/enet.h"
#include <string>

/// Socket abstraction class
class ConnectionUDP : public Connection
{
	private: // Private stuff
		ENetHost *sock;
		ENetPeer *peer;
	
	protected:
		bool connected;
		bool error;
		std::string strerror;
	
	public: // Public functions
		ConnectionUDP();
		virtual ~ConnectionUDP();
		
		/// Initiate a connection to the specified server
		bool Connect(const std::string& host, int port);
		/// Close a connection to a server
		void Disconnect();
		
		/// Read data on the socket
		bool Recv(void* buf, size_t len, bool wait = false);
		/// Write data to the socket
		bool Send(const void* buf, size_t len);
};

#endif

// The end
