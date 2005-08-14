// client.h
//  Client system

#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED

#include <vector>
#include <string>
#include <sstream>
#include <time.h>

#include "plat.h"
#include "enet/enet.h"
#include "gamestate.h"

enum UDPChannel
{
	CSystem = 0,
	CGame,
	CMisc,
	CChat,
	CNumChans // always is last. Not an actual chan, but serves as a count
};

class Client : public GameState
{
	private:
		ENetAddress address;
		ENetHost *client;
		ENetPeer *peer;
	
	public:
		Client(string host, int port);
		~Client();
		
		bool InitLogic();
		
		bool Send(ENetPeer *p, string data, UDPChannel chan);
		
		EStatus Tick(double dtime);
		void ClientTick();
		
		// System
		void OnRegisterConfirm(int id, string name);
		void OnBoot(string reason);
		
		void OnNew(int id, string name);
		void OnQuit(int id, string reason);
		// Game
		void OnJoin(int id);
		void OnLeave(int id);
		void OnMove(int id, int x, int y);
		void OnStatusUpdate(int score, int health, int x, int y, int flags, int state, int serverstate, int timeleft);
		// Misc
		void OnPong(string pd);
		// Chat
		void OnMsg(int id, string message);
};

#endif
// The End
