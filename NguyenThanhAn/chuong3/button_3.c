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
char buttons[4] = {'0', '0', '0', '0'};
int status_led[4] = {0, 0, 0, 0};

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
	int la2n = 2;
	int la3n = 3;
	int i, j;
	buttons_fd = open("/dev/buttons", 0);
	led_fd = open("/dev/leds", 0);
	if (led_fd < 0)
	{
		perror("open device leds");
		exit(1);
	}
 	if (buttons_fd < 0) //Kiểm tra quá trình mở file
	{
 		perror("open device buttons");
 		exit(1);
 	}
 	while(1) //Hỏi vòng kiểm tra trạng thái các nút bấm
 	{
 		char current_buttons[4];
 		int count_of_changed_key;
 		int i;
 		//Đọc trạng thái các nút bấm
 		if (read(buttons_fd, current_buttons, sizeof current_buttons) != sizeof current_buttons)
		{
 			perror("read buttons:");
 			exit(1);
 		}
 		//Kiểm tra trạng thái các nút bấm và in ra trạng thái phù hợp (Key up hay Key down)
 		for (i = 0, count_of_changed_key = 0; i < sizeof buttons / sizeof buttons[0]; i++)
		{
 			if (buttons[i] != current_buttons[i])
			{
 				buttons[i] = current_buttons[i];
				if(buttons[1] == '1')
				{
					while(buttons[1] == '1');
					for(j = 0; j < 3; j++)
					{
 						for(i = 0; i <= 4 ; i++) 
						{
							ioctl(led_fd, ON, i);
							ioctl(led_fd, OFF, i-1);
							usleep(500000);
						}
 					}
				}
				else if(buttons[2] == '1')
				{
					while(buttons[2] == '1');
 					for(i = 0; i <= 16; i++) 
					{
						tinhtoanbinary(i);
						sleep(1);
					}
					usleep(500000);
				}
				else if(buttons[3] == '1')
				{
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
 				count_of_changed_key++;
 			}
 		}
 		if (count_of_changed_key) 
		{
 			printf("\n");
 		}
 	}
 	close(buttons_fd);
	close(led_fd);
 	return 0;
}
