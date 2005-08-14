// connection.h
//  Connection class with SOCKS 4a support

#ifndef CONNECTION_H_INCLUDED
#define CONNECTION_H_INCLUDED

#include "plat.h"
#ifdef ABG_WINDOWS
#	include <winsock.h>
#endif
#include "enet/enet.h"
#include <string>

/// Socket abstraction class
class Connection
{
	public: // Public static functions
		static void GlobalInit();
		static void GlobalClose();
		
	protected: // Protected variables
#		ifdef ABG_WINDOWS
		SOCKET sock;
#		else
		int sock;
#		endif
		bool connected;
		bool error;
		std::string strerror;

	public: // Public functions
		Connection();
		virtual ~Connection();
		
		/// Initiate a connection to the specified server
		virtual bool Connect(const std::string& host, int port);
		/// Close a connection to a server
		virtual void Disconnect();
		
		/// Read data on the socket
		virtual bool Recv(void* buf, size_t len, bool wait = false);
		/// Write data to the socket
		virtual bool Send(const void* buf, size_t len);
		
		bool IsConnected()
		{ return connected; }
		bool IsError()
		{ return error; }
		const std::string& GetError()
		{ return strerror; }
};

#endif

// The end
