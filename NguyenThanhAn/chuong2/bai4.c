#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdbool.h>
#define ON 1
#define OFF 0

void status_run(char control)
{
	if (control=='s')
	{
		int i=0;
		if (i<4)
		{
			if (read(fd, status, i) < 0) 
			{
				perror("Failed to read GPIO pin value");
				exit(1);
		    	}
			printf("LED %d is %s", i+1, buttons[i] == '0' ? "OFF" : "ON"); 	
			i++;
		}
	}
}

bool check_input(char control)
{
	if (control=='1' || control=='2' || control=='3') return true;
	return false;
}


int main(int argc, char **argv)
{
	int fd;
	char value;
	char control;
	char status[4]=[];
	fd = open("/dev/leds", 0);
	if (fd < 0)
	{
		perror("open device leds");
		exit(1);
	}
	while(1)
	{
		printf("Enter:");
		scanf("%d",&control);		

    	}
	close(fd);
	return 0;
}	
