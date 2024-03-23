#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#define ON 1
#define OFF 0

int fd;
void sangdan()
	{
	ioctl(fd,OFF,0);
	ioctl(fd,OFF,1);
	ioctl(fd,OFF,2);
	ioctl(fd,OFF,3);
		usleep(300);
	ioctl(fd,OFF,0);
	ioctl(fd,OFF,1);
	ioctl(fd,On,2);
	ioctl(fd,OFF,3);
		usleep(300);
	ioctl(fd,OFF,0);
	ioctl(fd,OFF,1);
	ioctl(fd,OFF,2);
	ioctl(fd,OFF,3);
		usleep(300);	
	ioctl(fd,OFF,0);
	ioctl(fd,OFF,1);
	ioctl(fd,OFF,2);
	ioctl(fd,OFF,3);
		usleep(300);
	ioctl(fd,OFF,0);
	ioctl(fd,OFF,1);
	ioctl(fd,OFF,2);
	ioctl(fd,OFF,3);
		usleep(300);
	ioctl(fd,OFF,0);
	ioctl(fd,OFF,1);
	ioctl(fd,OFF,2);
	ioctl(fd,OFF,3);
		usleep(300);
	ioctl(fd,OFF,0);
	ioctl(fd,OFF,1);
	ioctl(fd,OFF,2);
	ioctl(fd,OFF,3);
		usleep(300);	
	ioctl(fd,OFF,0);
	ioctl(fd,OFF,1);
	ioctl(fd,OFF,2);
	ioctl(fd,OFF,3);
		usleep(300);
	
	
}

int main(int argc, char** argv)
{
	fd = open("/dev/leds",0);
	if(fd < 0)
	{
 		perror ("open device leds");
		exit(1);
	}

	while(1)
	{	
		sangdan();
	}

	close(fd);
	return 0;
}
