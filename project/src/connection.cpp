// connection.cpp
//  Connection class with SOCKS 4a support

#include <iostream>
#include <algorithm>
#include <sstream>
#include "plat.h"
#ifndef ABG_WINDOWS
#	include <sys/select.h>
#	include <unistd.h>
#	include <netdb.h>
#	include <sys/types.h>
#	include <netinet/in.h>
#	include <sys/socket.h>
#	include <sys/ioctl.h>
#	include <errno.h>
#endif
#include "connection.h"
#include "abg.h"

using namespace std;

void Connection::GlobalInit()
{
#	ifdef ABG_WINDOWS
	WORD sockVersion;
	WSADATA wsaData;

	sockVersion = MAKEWORD(1, 1);
	WSAStartup(sockVersion, &wsaData);
#	endif
	/*if(enet_initialize() != 0)
	{
		error = true;
		strerror = "Failed to initialize enet.";
	}*/
}

void Connection::GlobalClose()
{
#	ifdef ABG_WINDOWS
	WSACleanup();
#	endif
	//enet_deinitialize();
}

Connection::Connection(): sock(0), connected(false), error(false)
{
}

Connection::~Connection()
{
	Disconnect();
}

bool Connection::Connect(const string& host, int port)
{
	struct hostent *he, *she;
	struct sockaddr_in their_addr;
	
	error = false;

	string proxy = Ini::GetString(settings, "server", "proxyserver");
	int proxyport = atoi(Ini::GetString(settings, "server", "proxyport").c_str());
	string proxytype = Ini::GetString(settings, "server", "proxytype", "none");
	transform(proxytype.begin(), proxytype.end(), proxytype.begin(), (int (*)(int)) tolower);
	bool usingproxy = proxy != "" && proxyport != 0 && (proxytype == "socks4" || proxytype == "socks4a");
	
	if((he = gethostbyname(usingproxy ? proxy.c_str() : host.c_str())) == NULL)
	{
		error = true;
		strerror = "Unable to resolve " + usingproxy ? proxy : host;
		return false;
	}
	
	if((sock = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		error = true;
		stringstream s;
		//!! Print a textual error
#		ifdef ABG_WINDOWS
		s << WSAGetLastError();
#		else
		s << errno;
#		endif
		strerror = s.str();
		return false;
	}
	
	their_addr.sin_family = AF_INET;
	their_addr.sin_port = htons(usingproxy ? proxyport : port);
	their_addr.sin_addr = *((in_addr*) he->h_addr);
	memset(&(their_addr.sin_zero), 0, 8);
	
	if(connect(sock, (sockaddr*) &their_addr, sizeof(sockaddr)) == -1)
	{
		error = true;
		stringstream s;
		//!! Print a textual error
#		ifdef ABG_WINDOWS
		s << WSAGetLastError();
#		else
		s << errno;
#		endif
		strerror = s.str();
		return false;
	}
	
#	ifdef ABG_WINDOWS
	{
		unsigned long i = 1;
		ioctlsocket(sock, FIONBIO, &i);
	}
#	else
	{
		unsigned long i = 1;
		ioctl(sock, FIONBIO, &i);
	}
#	endif
	
	if(usingproxy)
	{
		char smsg[128];
		smsg[0] = 4;
		smsg[1] = 1;
		*(short *)(smsg + 2) = htons(port);
		if(proxytype == "socks4a")
		{
			smsg[4] = 0;
			smsg[5] = 0;
			smsg[6] = 0;
			smsg[7] = -1;
			sprintf(smsg + 8, "pheym%c%s", 0, host.c_str());
			Send(smsg, 15 + host.length());
		}
		else
		{
			if((she = gethostbyname(host.c_str())) == NULL)
			{
				error = true;
				strerror = "Unable to resolve " + host;
				return false;
			}
			smsg[4] = she->h_addr[0];
			smsg[5] = she->h_addr[1];
			smsg[6] = she->h_addr[2];
			smsg[7] = she->h_addr[3];
			sprintf(smsg + 8, "pheym");
			Send(smsg, 14);
		}

		Recv(smsg, 8, true);
		char vn = smsg[0], cd = smsg[1];
		if(vn != 0 || cd != 90)
		{
			strerror = "Proxy error:";
			if(vn != 0)
				strerror += " reply version != 0";
			if(cd != 90)
			{
				switch(cd)
				{
					case 91:
						strerror += " request rejected or failed";
						break;
					case 92:
						strerror += " rejected because SOCKS server cannot connect to identd on the client";
						break;
					case 93:
						strerror += " rejected because the client program and identd report different user-ids";
						break;
				}
			}
			error = true;
			Disconnect();
			return false;
		}
	}

	connected = true;
	
#	if TRACE_TRANSACTION
	cerr << (int) pthread_self() << " Connected" << endl;
#	endif

	return true;
}

void Connection::Disconnect()
{
#	ifdef ABG_WINDOWS
	closesocket(sock);
#	else
	close(sock);
#	endif
#	if TRACE_TRANSACTION
	cerr << (int) pthread_self() << " Disconnected" << endl;
#	endif
	connected = false;
}

bool Connection::Recv(void* buf, size_t len, bool wait)
{
	unsigned int sofar = 0;
	int thistime = 0;
	char* data = (char*) buf;
	// If the recive went (>0), loop
	// else, if the connection is open (recv != 0), loop
	// else, the error was wait and we must wait (err==wait && wait), loop
#	ifdef ABG_WINDOWS
	while((thistime = recv(sock, &data[sofar], len - sofar, 0)) > 0 || (thistime == SOCKET_ERROR && WSAGetLastError() == WSAEWOULDBLOCK && wait))
#	else
	while((thistime = recv(sock, &data[sofar], len - sofar, 0)) > 0 || (thistime == -1 && errno == EAGAIN && wait))
#	endif
		{
			if(thistime > 0)
			{
				sofar += thistime;
				if(sofar >= len) return true;
			}
			else
			{
#				ifdef ABG_WINDOWS
				::Sleep(10);
#				else
				timeval t;
				t.tv_sec = 0;
				t.tv_usec = 10000;
				select(0, NULL, NULL, NULL, &t);
#				endif
			}
	}
#	ifdef ABG_WINDOWS
	if(thistime == SOCKET_ERROR && WSAGetLastError() != WSAEWOULDBLOCK)
#	else
	if(thistime == -1 && errno != EAGAIN)
#	endif
	{
		stringstream s;
		//!! Print a textual error
#		ifdef ABG_WINDOWS
		s << WSAGetLastError();
#		else
		s << errno;
#		endif
		strerror = s.str();
		Disconnect();
		error = true;
	}
	return false;
}

bool Connection::Send(const void* buf, size_t len)
{
	unsigned int sofar = 0;
	int thistime;
	const char* data = (const char*) buf;
#	if TRACE_TRANSACTION
	cerr << (int) pthread_self() << " " << data;
#	endif
	// If the send went (>0), loop
	// else, if the connection is open (send != 0), loop
	
#	ifdef ABG_WINDOWS
	// else, the error was wait (err==wait), loop
	while((thistime = send(sock, &data[sofar], len - sofar, 0)) > 0 || (thistime == SOCKET_ERROR && WSAGetLastError() == WSAEWOULDBLOCK))
#	else
	while((thistime = send(sock, &data[sofar], len - sofar, 0)) > 0 || (thistime == -1 && errno == EAGAIN))
#	endif
	{
		if(thistime > 0)
		{
			sofar += thistime;
			if(sofar >= len) return true;
		}
		else
		{
#			ifdef ABG_WINDOWS
			::Sleep(10);
#			else
			timeval t;
			t.tv_sec = 0;
			t.tv_usec = 10000;
			select(0, NULL, NULL, NULL, &t);
#			endif
		}
	}
#	ifdef ABG_WINDOWS
	if(thistime == SOCKET_ERROR && WSAGetLastError() != WSAEWOULDBLOCK)
#	else
	if(thistime == -1 && errno != EAGAIN)
#	endif
	{
		stringstream s;
		//!! Print a textual error
#		ifdef ABG_WINDOWS
		s << WSAGetLastError();
#		else
		s << errno;
#		endif
		strerror = s.str();
		Disconnect();
		error = true;
	}
	return false;
}

// The end
