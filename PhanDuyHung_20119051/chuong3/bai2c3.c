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

int main(int argc, char** argv)
{
	int buttons_fd;
	int fd;
	int stt[4] = {0,0,0,0};//////
	char buttons[4]={'0','0','0','0'};
	fd = open("/dev/leds",0);
	buttons_fd=open("/dev/buttons",0);

	if (buttons_fd < 0)
	{
		perror("open device buttons");
		exit(1);
	}
	else if (fd < 0)
	{
		perror("open device leds");
		exit(1);
	}

	while(1)
	{
		char current_buttons[4];
		int status[4]={0,0,0,0};  ///////
		int i;

		if (read(buttons_fd, current_buttons,sizeof current_buttons) != sizeof current_buttons)
		{ 
			perror("read buttons:");
			exit(1);
		}

		for(i=0; i< sizeof buttons/ sizeof buttons[0]; i++)
		{
			
			if (buttons[i] != current_buttons[i])
			{
				stt[i]++;   //tang len mot don vi
			}
		}
	
		for(i=0; i<sizeof stt; i++)
		{
			if (stt[i] % 2 == 0)  // nen stti bang o thi off
			ioctl(fd, OFF, i);
			else
			ioctl(fd, ON, i);
		}
	}
close(buttons_fd);
close(fd);
return 0;
}

