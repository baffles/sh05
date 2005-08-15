// client.h
//  Client system

#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED

#include <vector>
#include <string>
#include <sstream>
#include <time.h>

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
		
	public: // Public variables
		class Game* game;
	
	private: // Private variables
		ENetAddress address;
		ENetHost *client;
		ENetPeer *peer;
		int lag;
		double progress;
		bool connected;
	
	public: // Public functions
		Client(std::string host, int port);
		~Client();
		
		bool Send(ENetPeer *p, std::string data, UDPChannel chan);
		
		// Debugging functions
		virtual void CheckValid();
		virtual void Dump(std::ostream& str);
		
		EStatus Tick(double dtime);
		
		bool InitLogic();
		
		int GetLag() { return lag; }
		
		// Send Handlers
		void Register(std::string name, std::string password = "");
		void Join();
		void Leave();
		void Move(int x, int y);
		void StatusUpdate();
		void Ping();
		void Msg(std::string message, std::string dest = "chat");
		void UpdateMyself();
		
		// Recieve Handlers
		// System
		void OnRegisterConfirm(int id, std::string name);
		void OnBoot(std::string reason);
		
		void OnNew(int id, std::string name);
		void OnQuit(int id, std::string reason);
		// Game
		void OnJoin(Pawn* p);
		void OnLeave(Pawn* p);
		void OnMove(int id, int x, int y);
		void OnStatusUpdate(int score, int health, int x, int y, int flags, int state, int serverstate, int timeleft);
		// Misc
		void OnPong(std::string pd);
		// Chat
		void OnMsg(Pawn* p, std::string message);
};

#endif
// The End
