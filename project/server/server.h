// server.h
//  Server class

#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED

#define DEDICATED_SERVER

#include <vector>
#include <string>
#include <sstream>
#include <time.h>

//#include <allegro.h>
//#include <winalleg.h>

#include "enet/enet.h"
#include "pawn.h"
#include "gamestate.h"

// flood control setup. MSG_C messages allowed every MSG_S seconds
#define MSG_C 5
#define MSG_S 3
// kickfactor. If the dropped message count exceeds the kept message count by this factor, the user is booted.
#define MSG_KF 1.5

using namespace std;

struct ServerUser
{
	bool registered;
	string name;
	string password;
	
	struct
	{
		time_t timeval;
		int count;
		
		int kept, dropped;
	} messageinfo;
	
	Pawn *pawn;
};

struct UserData
{
	ServerUser *user;
	ENetPeer *peer;
};

enum ServerState
{
	SStateInGame,
	SStateIntermission
};

enum UDPChannel
{
	CSystem = 0,
	CGame,
	CMisc,
	CChat
};

class Server : public GameState
{
	private:
		ENetAddress address;
		ENetHost *server;
		
		ServerState state;
		list<ServerUser> users;
	
	public:
		Server(int port);
		~Server();
		
		bool Send(ENetPeer *p, string data, UDPChannel chan, bool broadcast = false);
		void Boot(UserData& usr, string reason);
		
		EStatus Tick(double dtime);
		void ServerTick();
		
		// System
		void OnRegister(UserData& usr, string name, string pass);
		void OnQuit(UserData& usr, string reason);
		// Game
		void OnJoinGame(UserData& usr);
		void OnLeaveGame(UserData& usr);
		void OnRequestMove(UserData& usr, int x, int y);
		void OnRequestStateInfo(UserData& usr);
		// Misc
		void OnPing(UserData& usr, string pingdata);
		// Chat
		void OnMsg(UserData& usr, string dest, string msg);
};

#endif

// The end
