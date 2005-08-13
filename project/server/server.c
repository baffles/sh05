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
#else
#define sockstart() 0
#endif

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
	
	player *next;
};
player *players = NULL;

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

int main(int argc, char *argv[])
{
	struct timeval tv;
	struct sockaddr_in myaddr;
	struct sockaddr_in remoteaddr;
	fd_set master;
	fd_set read_fds;
	int fdmax, listener, newfd, nbytes, addrlen, i, j, k, l;
	char buf[512];
	const char yes = 1;
	
	if(sockstart() != 0)
	{
		printf("Error starting up socks :o\n");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", WSAGetLastError());
	
	FD_ZERO(&master);
	FD_ZERO(&read_fds);
	
	if((listener = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("socket");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", WSAGetLastError());
	
	if(setsockopt(listener, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1)
	{
		perror("setsockopt");
		printf("%d %d\n", listener, WSAGetLastError());
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
		if(select(fdmax + 1, &read_fds, NULL, NULL, NULL) == -1)
		{
			perror("select");
			exit(EXIT_FAILURE);
		}
		
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
					if((nbytes = recv(i, buf, sizeof(buf), 0)) <= 0)
					{
						if(nbytes == 0 || nbytes == -1)
						{
							player *todel, *cur = players;
							
							printf("socket %d hung up\n", i);
							todel = find_player_by_sock(i);
							while(cur->next  && cur->next != todel)
								cur = cur->next;
							cur->next = todel->next;
							free(todel);
						}
						else
						{
							perror("recv");
						}
						close(i);
						FD_CLR(i, &master); 
					}
					else
					{
						player *cur;
						// HANDLE HERE
						printf("\"%s\"\n", buf);
						if(strstr(buf, "\n"))
							*(strstr(buf, "\n")) = 0;
						if(strstr(buf, "\r"))
							*(strstr(buf, "\r")) = 0;
						buf[nbytes] = 0;
						
						if((cur = find_player_by_sock(i)) == NULL)
							printf("Uhh...\n");
						else
						{
							printf("Data from a player %s!\n", cur->registered ? cur->name : "Unregistered User");
							if(!cur->registered && buf[0] == 'R')
							{
								printf(" Registration: %s\n", buf + 1);
								strncpy(cur->name, buf + 1, 256);
								cur->name[255] = 0;
								cur->registered = 1;
								
								for(k = 0; k < strlen(buf); )
								{
									if((l = send(cur->sock, buf + k, strlen(buf) - k, 0)) > 0)
										k += l;
									else
										perror("send");
								}
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
						}
						
						for(j = 0; j <= fdmax; ++j)
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
						}
					}
				}
			}
		}
	}
	return 0;
}
