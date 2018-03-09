//Samuel Goldstein 55978173
//Taiki Tanaka 89214738
//Lab 5_server
//ICS 53 Winter 2018

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>

struct dataBase
{
	char name[50];
	char email[50];
};

static struct dataBase db[3];

int main(int argc, const char * argv[])
{
	int portNum = atoi(argv[1]);
	int server_fd, new_socket, valread;
	struct sockaddr_in address;
	int opt = 1;
	int addrlen = sizeof(address);
	
	//Hardcoded email and name in dateBase
	strcpy(db[0].email,"harris@ics.uci.edu");
	strcpy(db[1].email,"joe@cnn.com");
	strcpy(db[2].email,"jane@slashdot.org");

	strcpy(db[0].name,"Ian G. Harris");
	strcpy(db[1].name,"Joe Smith");
	strcpy(db[2].name,"Jane Smith");
	
	

	
	return 0;
}
