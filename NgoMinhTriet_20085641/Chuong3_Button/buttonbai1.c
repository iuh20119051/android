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

#define ON 1
#define OFF 0

int main(int argc, char** argv)
{
	int buttons_fd, led_fd;
 	char buttons[4] = {'0', '0', '0', '0'};
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
 	while(1) //Hỏi vòng kiểm tra trạng thái các nút bấm
 	{
 		char current_buttons[4];
 		int i;
		int led;
 		//Đọc trạng thái các nút bấm
 		if (read(buttons_fd, current_buttons, sizeof current_buttons) != sizeof current_buttons)
		{
 			perror("read buttons:");
 			exit(1);
 		}
 		for (i = 0; i < sizeof buttons / sizeof buttons[0]; i++)
		{
 			if (buttons[i] != current_buttons[i])
			{
				for (led=0;led<1;led++)
				{
					ioctl(led_fd,ON,led);
				} 				
				buttons[i] = current_buttons[i];
				
 				if(i==0)
				{
					for (led=0;led<1;led++)
					{
						ioctl(led_fd,ON,led);
					}
				}
				if(i==1)
				{
					for (led=0;led<2;led++)
					{
						ioctl(led_fd,ON,led);
					}
				}
				if(i==2)
				{
					for (led=0;led<3;led++)
					{
						ioctl(led_fd,ON,led);
					}
				}
 				if(i==3)
				{
					for (led=0;led<4;led++)
					{
						ioctl(led_fd,ON,led);
					}
				}
 			}
 		}
 		
 	}
 	close(buttons_fd); //Đóng file thiết bị
	close(led_fd);
 	return 0;
}
