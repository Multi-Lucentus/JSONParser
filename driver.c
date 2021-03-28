#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024


struct JSON
{

};
typedef struct JSON JSONObject;


// Main Function - Start of Program Logic
int main(int argc, char **argv)
{
	// Variables
	char *filename;
	char *buffer;
	int fd;

	JSONObject *json;

	// Check command-line arguments
	// Should be one that is the filename	
	if(argc != 2)
	{
		printf("Illegal number of command-line arguments: %d\n", argc);
	}
	else
	{
		filename = argv[1];
	}

	// Open the file and read
	fd = open(filename, O_RDONLY, 0);

	buffer = (char*)malloc(BUF_SIZE * sizeof(char));

	char c;
	while(read(fd, &c, 1) > 0)
	{

	}	

	exit(EXIT_SUCCESS);
}
