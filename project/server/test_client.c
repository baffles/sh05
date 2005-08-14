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
struct timeval t; 
# define Sleep(x) t.tv_sec = 0; t.tv_usec = x*1000; select(0, NULL, NULL, NULL, &t);
# define closesocket(x) close(x)
#endif

#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

  #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include <sys/types.h>
#include <time.h>

#ifndef _WIN32
int timeGetTime()
{
	struct timeval t;
	gettimeofday(&t, NULL);
	return t.tv_usec / 1000;
}
#endif

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

int main(int argc, char *argv[])
{
	int sockfd, i, j,k;
	uint32_t qpc1, qpc2, qpf;
	int lag;
	struct sockaddr_in dest_addr;
	char msg[256], buf[256];
	
	/*^^if(argc != 2)
	{
		printf("Usage: %s [name]\n", argv[0]);
		return -1;
	}^^*/
	
	sockstart();
	
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	
	dest_addr.sin_family = AF_INET;
	dest_addr.sin_port = htons(PORT);
	//dest_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	dest_addr.sin_addr.s_addr = inet_addr("69.169.194.141");
	memset(&(dest_addr.sin_zero), '\0', 8);
	
	connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
	//printf("%d\n", WSAGetLastError());
	
	//^^sprintf(msg, "R%s\n", argv[1]);
	sprintf(msg, "Rtest\n");
	printf(" --> %s", msg);
	printf("%d %d\n", send(sockfd, msg, strlen(msg), 0), strlen(msg));
	
	recv(sockfd, buf, sizeof(buf), 0);
	if(strncmp(msg, buf, strlen(msg)) == 0)
		printf("Alright!\n");
	
	Sleep(1000);
	
	printf("Testing lag...\n");
	//while(1) {
	for(k = 0; k < 10; k++) {
//	sprintf(msg, "P %d:", time(NULL));
	//QueryPerformanceCounter((PLARGE_INTEGER)&qpc1);
	//sprintf(msg, "P %llu:", qpc1);
	sprintf(msg, "P %lu:\n", timeGetTime());
	printf(" --> %s\n", msg);
	i = send(sockfd, msg, strlen(msg), 0);
	while(i < strlen(msg))
	{
		j = send(sockfd, msg + i, strlen(msg) - i, 0);
		if(j > 0)
			i += j;
		else
		{
			perror("send");
			break;
		}
	}
	
	memset(buf, '\0', sizeof(buf));
	i = recv(sockfd, buf, 512, 0);
	while(!strstr(buf, ":"))
	{
		i += recv(sockfd, buf + i, 512 - i, 0);
	}
	*(strstr(buf, ":")) = 0;
//	lag = time(NULL) - atoi(buf + 2);
	//QueryPerformanceCounter((PLARGE_INTEGER)&qpc2);
	//QueryPerformanceFrequency((PLARGE_INTEGER)&qpf);
	
	//lag = qpc2 - atoll(buf + 2);
	lag = timeGetTime() - atol(buf + 2);
//	printf("Lag: %f [%s] [now %llu][then %llu][then should be %llu]\n", (float)(lag / qpf), buf, qpc2, atoll(buf + 2), qpc1);
	printf("Lag: %dms [%s] [now %lu][then %lu]\n", lag, buf, timeGetTime(), atol(buf + 2)); Sleep(10);
	
	// do some chat testing
	sprintf(msg, "M sup! this is loop # %d\n", k);
	send(sockfd, msg, strlen(msg), 0);
	
	}
	
	Sleep(1000);
	closesocket(sockfd);
}
