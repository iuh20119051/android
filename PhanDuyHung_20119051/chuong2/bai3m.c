#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>


#define ON 1
#define OFF 0
int main(int argc, char**argv)
{ 
	int fd;
	fd= open("/dev/leds",0);

	if(fd<0)
	{
 		perror ("open device leds");
		exit(1);
	}

	while(1)
	{
		int i;		

		for(i=0; i<=3; i++)
		{
	  		ioctl(fd,ON,i);
	  		usleep(400000);
	  		ioctl(fd,OFF,i);
	  		
		}
	}

close(fd);
return 0;
}

