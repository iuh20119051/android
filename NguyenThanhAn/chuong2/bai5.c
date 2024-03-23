#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdbool.h>
#define ON 1
#define OFF 0
#define KEY_1 0x31
#define KEY_2 0x32
#define KEY_3 0x33
#define KEY_ENTER 10

int count=0;

void sang_duoi(int fd)
{
	int status=0;
	ioctl(fd, ON, 0);
	if (status==0 && count==300000)
	{	
		ioctl(fd, OFF, 0);
		ioctl(fd, ON, 1);
		count=0;
		status++;
	}
	if (status==1 && count==300000)
	{
		ioctl(fd, OFF, 1);
		ioctl(fd, ON, 2);
		count=0;
		status++;
	}
	if (status==2 && count==300000)
	{
		ioctl(fd, OFF, 2);
		ioctl(fd, ON, 3);
		count=0;
		status++;
	}
	if (status==3)
	{
		if(count==300000)
		{
			status=0;
			count=0;
		}
	}
	ioctl(fd, OFF, 3);
	usleep(1);
	count++;
}
void sang_tat(int fd)
{
	int status=0;
	ioctl(fd, ON, 0);
	ioctl(fd, ON, 1);
	ioctl(fd, ON, 2);
	ioctl(fd, ON, 3);
	
	if (count==300000)
	{
		ioctl(fd, OFF, 0);
		ioctl(fd, OFF, 1);
		ioctl(fd, OFF, 2);
		ioctl(fd, OFF, 3);
		count=0;
		status=1;
	}
	if (status==1)
	{
		if(count==300000)
		{
			status=0;
			count=0;
		}
	}
	usleep(1);
	count++;
	
}
void tat(int fd)
{
	ioctl(fd, OFF, 0);
	ioctl(fd, OFF, 1);
	ioctl(fd, OFF, 2);
	ioctl(fd, OFF, 3);
}


int main(int argc, char **argv)
{
	char key=KEY_3;
	char status=KEY_3;
	int n;
	int fd = open("/dev/leds", 0);
	if (fd < 0)
	{
		perror("open device leds");
		exit(1);
	}
	key = getchar();
	while(1)
	{	
		if (key != KEY_ENTER)
		{
			status = key;
			printf("key:%d\n",key); 
			sleep(1);
		}
		printf("%d\n",status);
		switch(status)
		{
			case KEY_1: sang_duoi(fd);break;
			case KEY_2: sang_tat(fd);break;
			case KEY_3: tat(fd);break;		
		}
	}
	close(fd);
	return 0;
}
