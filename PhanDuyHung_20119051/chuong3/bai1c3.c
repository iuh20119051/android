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
	int buttons_fd;    // khai bao 2 bien fd
	int fd;
	char buttons[4] = {'0','0','0','0'}; // khai bao mot mang kieu ky tu 
					// co 5 phan tu
	buttons_fd = open("/dev/buttons",0);

	int status_led[4] = {0,0,0,0};

	fd = open("/dev/leds",0);

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
		//int count;
		int i;

		if (read(buttons_fd,current_buttons,sizeof current_buttons) != 			sizeof current_buttons)
		{ 
			perror("read buttons:");
			exit(1);
		}

		for (i=0;i< sizeof buttons/sizeof buttons[0]; i++)
		{
			if (buttons[i] != current_buttons[i])
			{
				buttons[i] = current_buttons[i];  

				if (buttons[i] == 0)

				ioctl(fd, OFF, i);

				else

				ioctl(fd, ON, i);
			}
		}

	}

close(buttons_fd);
close(fd);
return 0;
}
