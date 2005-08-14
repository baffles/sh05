/**
 ** header
 **
 ** SpeedHack 2005
 **
 **  by BAF
 **/

#ifdef _WIN32
#	include <winsock.h>
# define MSG_DONTWAIT 0
# define EAGAIN WSAEWOULDBLOCK
# define _errno_ WSAGetLastError()
#else
#	include <sys/socket.h>
#	include <netinet/in.h>
#	include <arpa/inet.h>
#	include <netdb.h>
#	include <errno.h>
#	include <sys/ioctl.h>
#	include <sys/select.h> 
#	define _errno errno
#endif

#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

#define PORT 21870
// this WILL be moved later
#define NUM_WEAPONS 2

#ifdef _WIN32
void sockstop()
{
	WSACleanup();
}

int sockstart()
{
	WSADATA wsa_data;
	if(WSAStartup(MAKEWORD(2, 2), &wsa_data) != 0)
	{
		if(WSAStartup(MAKEWORD(1, 1), &wsa_data) != 0)
		{
			return -1;
		}
	}
	atexit(sockstop);
	return 0;
}

void yield_timeslice()
{
	Sleep(0);
}
#else
#define sockstart() 0
void yield_timeslice()
{
	struct timeval t;
	t.tv_sec = 0;
	t.tv_usec = 0;
	select(0, NULL, NULL, NULL, &t);
}
#endif

#define INTERMISSION_LENGTH 120 // 2 minutes
#define GAME_LENGTH         600 // 10 mins

enum
{
	STATE_LOBCHAT = 1,
	STATE_LCREJOIN,
	STATE_INGAME,
	STATE_WATCH
};

enum
{
	SSTATE_INGAME = 1,
	SSTATE_INTERMISSION
};

typedef struct player player;
struct player
{
	char name[256];
	int sock; struct sockaddr_in addr;
	int score, health;
	unsigned char registered;
	
	struct
	{
		int x, y;
	} position;
	
	struct
	{
		unsigned char has;
		int ammo;
		int flags;
	} weapons[NUM_WEAPONS];
	
	int flags;
	int state;
	
	player *next;
};
player *players = NULL;

struct
{
	int start, end, length;
	int state;
	// map
	// some info
} gameinfo;

//FILE *logfile = stdout;

player *find_player_by_sock(int sockid)
{
	player *cur = players;
		printf("->checking for %d\n", sockid);
	while(cur)
	{
		printf("l ");
		if(cur->sock == sockid)
			return cur;
		
		cur = cur->next;
	}
		printf("\n->didnt find %d\n", sockid);
	return NULL;
}

void kill_player_by_sock(int sockid, fd_set *master)
{
	player *todel, *cur = players;	
	printf("socket %d hung up\n", sockid);
	todel = find_player_by_sock(sockid);
	while(cur->next  && cur->next != todel)
		cur = cur->next;
	cur->next = todel->next;
	free(todel);
	closesocket(sockid);
	FD_CLR(sockid, master);
}

int main(int argc, char *argv[])
{
	struct timeval tv;
	time_t last_update;
	struct sockaddr_in myaddr;
	struct sockaddr_in remoteaddr;
	fd_set master;
	fd_set read_fds;
	int fdmax, listener, newfd, nbytes, addrlen, i, j, k, l, sr;
	char buf[2048];
	const char yes = 1;
	
	if(sockstart() != 0)
	{
		printf("Error starting up socks :o\n");
		exit(EXIT_FAILURE);
	}
	
	FD_ZERO(&master);
	FD_ZERO(&read_fds);
	gameinfo.start = time(NULL);
	gameinfo.length = INTERMISSION_LENGTH;
	gameinfo.end = gameinfo.start + gameinfo.length;
	gameinfo.state = SSTATE_INTERMISSION;
	
	if((listener = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("socket");
		exit(EXIT_FAILURE);
	}
	
	if(setsockopt(listener, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1)
	{
		perror("setsockopt");
		exit(EXIT_FAILURE);
	}
	
	// wee lets bind it
	myaddr.sin_family = AF_INET;
	myaddr.sin_addr.s_addr = INADDR_ANY;
	myaddr.sin_port = htons(PORT);
	memset(&(myaddr.sin_zero), '\0', 8);
	if(bind(listener, (struct sockaddr *)&myaddr, sizeof(myaddr)) == -1)
	{
		perror("bind");
		exit(EXIT_FAILURE);
	}
	
	if(listen(listener, 25) == -1)
	{
		perror("listen");
		exit(EXIT_FAILURE);
	}
	
	FD_SET(listener, &master);
	fdmax = listener;
	
	while(1)
	{
		read_fds = master;
		tv.tv_sec = 3;
		tv.tv_usec = 0;
		if((sr = select(fdmax + 1, &read_fds, NULL, NULL, &tv)) == -1)
		{
			perror("select");
			exit(EXIT_FAILURE);
		}
		else if(sr != 0)
		{
			for(i = 0; i <= fdmax; ++i)
			{
				if(FD_ISSET(i, &read_fds))
				{
					if(i == listener)
					{
						// new connection \o/
						addrlen = sizeof(remoteaddr);
						if((newfd = accept(listener, (struct sockaddr *)&remoteaddr, &addrlen)) == -1)
						{
							perror("accept");
						}
						else
						{
							player *np;
							
							FD_SET(newfd, &master);
							fdmax = newfd > fdmax ? newfd : fdmax;
							
							np = (player *)malloc(sizeof(player));
							np->sock = newfd;
							np->addr = remoteaddr;
							np->score = 0;
							np->health = 0;
							np->registered = 0;
							np->position.x = 0;
							np->position.y = 0;
							np->flags = 0;
							np->state = STATE_LOBCHAT;
							np->next = NULL;
							
							if(!players)
								players = np;
							else
							{
								player *cur = players;
								while(cur->next)
									cur = cur->next;
								cur->next = np;
							}
							
							printf("new connection - %s on socket %d\n", inet_ntoa(remoteaddr.sin_addr), newfd);
						}
					}
					else
					{
						int n = nbytes = 0;
						unsigned char err = 0;
						memset(buf, '\0', sizeof(buf));
						while(nbytes < sizeof(buf) && !strstr(buf, "\n") && !err)
						{
							if((n = recv(i, buf, sizeof(buf), 0)) <= 0)
							{
								kill_player_by_sock(i, &master);
								perror("recv");
								err = 1;
							}
							nbytes += n;
						}
						if(nbytes >= sizeof(buf) && !strstr(buf, "\n"))
						{
							// holy crap - get rid of all their CRAP
							char crap[2]; int count;
							crap[1] = 0;
							// eat it!
							while(crap[0] != '\n')
							{
								if(recv(i, crap, 1, 0) != 1)
									break;
								++count;
							}
							printf("WOW! %d just FLOODED us with at least %fkb\n", i, (float)((float)(sizeof(buf) + count) / 1024.0f));
							err = 1;
						}
						
						if(!err)
						{
							player *cur;
							// HANDLE HERE
							//printf("\"%s\"\n", buf);
							if(strstr(buf, "\n"))
								*(strstr(buf, "\n")) = 0;
							if(strstr(buf, "\r"))
								*(strstr(buf, "\r")) = 0;
							buf[nbytes] = 0;
							
							if((cur = find_player_by_sock(i)) == NULL)
								printf("Uhh...\n");
							else
							{
								//printf("Data from a player %s!\n", cur->registered ? cur->name : "Unregistered User");
								if(!cur->registered && buf[0] == 'R')
								{
									char out[260];
									
									printf(" Registration: %s\n", buf + 2);
									strncpy(cur->name, buf + 2, 256);
									cur->name[255] = 0;
									cur->registered = 1;
									sprintf(out, "J %d :%s\n", i, cur->name);
									
									for(j = 0; j < fdmax; ++j)
									{
										if(FD_ISSET(j, &master))
										{
											if(j == i)
												send(j, buf, strlen(buf), 0);
											else if(j != listener)
												send(j, out, strlen(out), 0);
										}
									}
									
									/*for(k = 0; k < strlen(buf); )
									{
										if((l = send(cur->sock, buf + k, strlen(buf) - k, 0)) > 0)
											k += l;
										else
											perror("send");
									}*/
								}
								
								if(buf[0] == 'P')
								{
									printf("-Ping from %s!  [%s]\n", cur->name, buf);
									for(k = 0; k < strlen(buf); )
									{
										if((l = send(cur->sock, buf + k, strlen(buf) - k, 0)) > 0)
											k += l;
										else
											perror("send");
									}
								}
								
								if(buf[0] == 'M')
								{
									char out[2048];
									snprintf(out, sizeof(out), "M %d :%s\n", i, buf + 2);
									printf("-Message from %s! [%s]\n", cur->name, buf + 2);
									for(j = 0; j <= fdmax; ++j)
									{
										if(FD_ISSET(j, &master))
										{
											if(j != listener && j != i)
											{
												k = send(j, out, strlen(out), 0);
											}
										}
									}
								}
								
								if(buf[0] == 'S')
								{
									char out[512];
									
									sprintf(out, "S %d %d %d,%d %d %d %d %d\n", cur->score, cur->health, cur->position.x, cur->position.y, cur->flags, cur->state, gameinfo.state, gameinfo.end - time(NULL));
									send(i, out, strlen(out), 0);
								}
								
								if(buf[0] == 'J' && cur->state != STATE_INGAME) // join game
								{
									char out[260];
									
									cur->state = STATE_INGAME;
									sprintf(out, "E %d\n", cur->sock);
									
									for(j = 0; j < fdmax; ++j)
									{
										if(FD_ISSET(j, &master))
										{
											if(j != listener && j != i)
											{
												send(j, out, strlen(out), 0);
											}
										}
									}
								}
								if(buf[0] == 'L' && cur->state == STATE_INGAME) // leave game
								{
									char out[260];
									
									cur->state = (gameinfo.state == SSTATE_INGAME) ? STATE_WATCH : STATE_LOBCHAT;
									sprintf(out, "L %d\n", cur->sock);
									
									for(j = 0; j < fdmax; ++j)
									{
										if(FD_ISSET(j, &master))
										{
											if(j != listener && j != i)
											{
												send(j, out, strlen(out), 0);
											}
										}
									}
								}
								
								if(buf[0] == 'Q') // quit
								{
									char out[260];
									
									kill_player_by_sock(i, &master);
									sprintf(out, "Q %d\n", cur->sock);
									
									for(j = 0; j < fdmax; ++j)
									{
										if(FD_ISSET(j, &master))
										{
											if(j != listener && j != i)
											{
												send(j, out, strlen(out), 0);
											}
										}
									}
								}
								
								if(cur->state == STATE_INGAME)
								{
									if(buf[0] == 'E')
									{
										int wx, wy;
										printf("-Request to move from %s!  [%s]\n", cur->name, buf);
										sscanf(buf + 2, "%d,%d", &wx, &wy);
										printf("  wants (%d,%d)\n", wx, wy);
										// check it!
										{
											char out[260];
											sprintf(out, "O %d %d,%d", cur->sock, (cur->position.x = wx), (cur->position.y = wy));
											
											for(j = 0; j < fdmax; ++j)
											{
												if(FD_ISSET(j, &master))
												{
													if(j != listener)
													{
														send(j, out, strlen(out), 0);
													}
												}
											}
										}
									}
								}
								if(cur->state == STATE_LOBCHAT)
								{
									/*if(buf[0] == 'M')
									{
										char msg[512];
										strncpy(msg, buf + 1, sizeof(buf));
										msg[511] = 0;
										printf("--> Message from %s: %s\n", cur->name, msg);
										
									}*/
								}
							}
							
							/*for(j = 0; j <= fdmax; ++j)
							{
								if(FD_ISSET(j, &master))
								{
									if(j != listener && j != i)
									{
										if(send(j, buf, nbytes, 0) == -1)
										{
											perror("send");
										}
									}
								}
							}*/
						}
					}
				}
			}
		}
		
		if(last_update <= (time(NULL) - 6))
		{
			// update
			char out[512];
			
			if(time(NULL) >= gameinfo.end)
			{
				player *cur = players;
				switch(gameinfo.state)
				{
					case SSTATE_INTERMISSION:
						printf("Time to start the game...");
						gameinfo.start = time(NULL);
						gameinfo.length = GAME_LENGTH;
						gameinfo.end = gameinfo.start + gameinfo.length;
						gameinfo.state = SSTATE_INGAME;
						
						while(cur)
						{
							cur->state = (cur->state == STATE_LCREJOIN) ? STATE_INGAME : STATE_WATCH;
							cur = cur->next;
						}
						break;
					case SSTATE_INGAME:
						printf("Time to end the game...");
						gameinfo.start = time(NULL);
						gameinfo.length = INTERMISSION_LENGTH;
						gameinfo.end = gameinfo.start + gameinfo.length;
						gameinfo.state = SSTATE_INTERMISSION;
						
						while(cur)
						{
							cur->state = (cur->state == STATE_INGAME) ? STATE_LCREJOIN : STATE_LOBCHAT;
							cur = cur->next;
						}
						break;
				}
			}
			
			sprintf(out, "U %d %d\n", gameinfo.state, gameinfo.end - time(NULL));
			for(i = 0; i <= fdmax; ++i)
			{
				if(FD_ISSET(i, &master))
				{
					if(i != listener)
					{
						send(i, out, strlen(out), 0);
					}
				}
			}
			last_update = time(NULL);
			printf("<--> Updated [%d]\n", last_update);
		}
			
		yield_timeslice(); // give some time back \o/
	}
	return 0;
}
