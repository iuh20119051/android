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
#include <string.h> 

int buttons_fd;
char buttons[3] = {'0', '0', '0'};
int k1_pre = 0;
int k2_pre = 0;
int count = 0;
char count_char;
int main(int argc, char** argv)
{	
	buttons_fd = open("/dev/buttons", 0);
 	if (buttons_fd < 0)
	{
 		perror("open device buttons");
 		exit(1);
 	}
 	while(1) 
 	{
 		char current_buttons[3];
 		int i;
 		//Đọc trạng thái các nút bấm
 		if (read(buttons_fd, current_buttons, sizeof current_buttons) != sizeof current_buttons)
		{
 			perror("read buttons:");
 			exit(1);
 		}
 		//Kiểm tra trạng thái các nút bấm và in ra trạng thái phù hợp (Key up hay Key down)
 		for (i = 0; i < sizeof buttons / sizeof buttons[0]; i++)
		{
			if (buttons[i] != current_buttons[i])
			{
 				buttons[i] = current_buttons[i];
 				if(buttons[0] == '1' )
				{	
					k1_pre = 1;
				}
				else if(buttons[1] == '1')
				{	
					k2_pre = 1;
				}
				else if(buttons[0] == '0' && k1_pre == 1)
				{
					FILE * pFile;
					count++;
					printf("So lan K1: %d\n", count); 
					pFile = fopen("text.txt", "w");
					fprintf(pFile, "So lan nhan nut K1 la: %d", count);
					k1_pre = 0;
				}
				else if(buttons[1] == '0' && k2_pre == 1)
				{
					printf("So lan nhan nut K1 la:%d\n", count);
					k2_pre = 0;
				}
				else if(buttons[2] == '1')
				{
					count = 0;
				}
 			}
 		}
 	}
 	close(buttons_fd);
 	return 0;
}
