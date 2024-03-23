#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/select.h>
#include<sys/time.h>
#include<errno.h>

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
		int i,j;

		for(i=0; i<= 3; i++)
		{
	 		ioctl(fd,ON, i);	
		}
		usleep(500000);
		for(j=0; j <= 3; j++)
		{	
	  		ioctl(fd,OFF, j);
		}
		usleep(500000);
	}

close(fd);
return 0;
}

