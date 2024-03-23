#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/select.h>
#include <sys/time.h>
#include <errno.h>
#include <unistd.h> 

#define ON 1
#define OFF 0
int buttons_fd, led_fd;
char buttons[6] = {'0', '0', '0', '0','0','0'};
void tinhtoanbinary(int a)
{
	int led0, led1, led2, led3;
	led0 = a % 2;
	led1 = (a / 2) % 2;
	led2 = (a / 4) % 2;
	led3 = a / 8;
	ioctl(led_fd, led0, 0);
	ioctl(led_fd, led1, 1);
	ioctl(led_fd, led2, 2);
	ioctl(led_fd, led3, 3);
}

int main(int argc, char** argv)
{
	
	buttons_fd = open("/dev/buttons", 0);
	led_fd = open("/dev/leds", 0);
	if (led_fd < 0)
	{
		perror("open device leds");
		exit(1);
	}
 	if (buttons_fd < 0)
	{
 		perror("open device buttons");
 		exit(1);
 	}
	ioctl(led_fd, OFF, 0);
	ioctl(led_fd, OFF, 1);
	ioctl(led_fd, OFF, 2);
	ioctl(led_fd, OFF, 3);
 	while(1)
 	{
 		char current_buttons[4];
 		int i;
 		if (read(buttons_fd, current_buttons, sizeof current_buttons) != sizeof current_buttons)
		{
 			perror("read buttons:");
 			exit(1);
 		}
		
 		for (i = 0; i < 6; i++)
		{
 			if (buttons[i] != current_buttons[i])
			{
 				buttons[i] = current_buttons[i];
				if (buttons[2] == '1')
				{
					while(buttons[2] == '1');
					tinhtoanbinary(1);
					usleep(500000);
					tinhtoanbinary(3);
					usleep(500000);
					tinhtoanbinary(7);
					usleep(500000);
					tinhtoanbinary(15);
					usleep(500000);
					tinhtoanbinary(0);
					usleep(500000);	
				}
				else if (buttons[3] == '1')
				{
					while(buttons[2] == '1');
					tinhtoanbinary(8);
					usleep(500000);
					tinhtoanbinary(12);
					usleep(500000);
					tinhtoanbinary(14);
					usleep(500000);
					tinhtoanbinary(15);
					usleep(500000);
					tinhtoanbinary(0);
					usleep(500000);		
				}
 			}
 		}
 	}
 	close(buttons_fd);
 	return 0;
}
