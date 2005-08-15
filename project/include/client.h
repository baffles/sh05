// client.h
//  Client system

#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED

#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <time.h>

#include "enet/enet.h"
#include "gamestate.h"

enum UDPChannel
{
	CSystem = 0,
	CGame,
	CMisc,
	CChat,
	CFile,
	CNumChans // always is last. Not an actual chan, but serves as a count
};

class Client: public GameState
{
	public: // Public static functions
		static bool GlobalInit();
		static void GlobalClose();
		
	public: // Public variables
		class Game* game;
		std::map<unsigned int, Pawn*> players;
	
	private: // Private variables
		ENetAddress address;
		ENetHost *client;
		ENetPeer *peer;
		//int lag;
		//double progress;
		bool connected;
	
	public: // Public functions
		Client(std::string host, int port);
		~Client();
		
		bool Send(ENetPeer *p, std::string data, UDPChannel chan);
		
		// Debugging functions
		virtual void CheckValid();
		virtual void Dump(std::ostream& str);
		
		EStatus HandleEvent(ENetEvent& event, bool insend = false);
		EStatus Tick(double dtime);
		
		bool InitLogic();
		
		int GetLag() { return peer->roundTripTime; }
		
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
		void OnRegisterConfirm(unsigned int id, std::string name);
		void OnBoot(std::string reason);
		
		void OnNew(unsigned int id, std::string name);
		void OnQuit(unsigned int id, std::string reason);
		// Game
		void OnJoin(Pawn* p);
		void OnLeave(Pawn* p);
		void OnMove(unsigned int id, int x, int y);
		void OnStatusUpdate(int score, int health, int x, int y, int flags, int state, int serverstate, int timeleft);
		void OnUpdate(Pawn* p, int pstate, int face, int spritestate, int jumptime, int xs);
		// Misc
		void OnPong(std::string pd);
		// Chat
		void OnMsg(Pawn* p, std::string message);
		// File send stuff
		EStatus OnSend(std::string filename);
};

#endif
// The End
