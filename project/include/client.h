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

class Client: public GameState
{
	public: // Public static functions
		static bool GlobalInit();
		static void GlobalClose();
	
	private: // Private variables
		ENetAddress address;
		ENetHost *client;
		ENetPeer *peer;
		int lag;
	
	public: // Public functions
		Client(std::string host, int port);
		~Client();
		
		bool InitLogic();
		
		bool Send(ENetPeer *p, std::string data, UDPChannel chan);
		
		EStatus Tick(double dtime);
		bool ClientTick();
		
		int GetLag() { return lag; }
		
		// Send Handlers
		void Register(std::string name, std::string password = "");
		void Join();
		void Leave();
		void Move(int x, int y);
		void StatusUpdate();
		void Ping();
		void Msg(std::string message, std::string dest = "chat");
		
		// Recieve Handlers
		// System
		void OnRegisterConfirm(int id, std::string name);
		void OnBoot(std::string reason);
		
		void OnNew(int id, std::string name);
		void OnQuit(int id, std::string reason);
		// Game
		void OnJoin(int id);
		void OnLeave(int id);
		void OnMove(int id, int x, int y);
		void OnStatusUpdate(int score, int health, int x, int y, int flags, int state, int serverstate, int timeleft);
		// Misc
		void OnPong(std::string pd);
		// Chat
		void OnMsg(int id, std::string message);
};

#endif
// The End
