#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char* argv[])
{
	// more than two arguments are not allowed
	if( argc > 2 )
		{
		printf("Invalid Number of arguments for usleep\n");
		exit(0);
		}

	// if no arguments are given it sleeps for 10 ticks
	if( argc == 1 )
		{
		sleep(10);
		exit(0);
		}
	
	int time =0;
	char* time_s = argv[1];
	while( *time_s != '\0' )
		{
		time *= 10;
		time += (*time_s) - '0';
		time_s++;
		}
	sleep(time);
	exit(0);
}
		
