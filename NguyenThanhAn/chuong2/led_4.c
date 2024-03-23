/*
Bai 4: chuong trinh dung ban phim de xem trang thai va dieu khien 4led don 
 -Nhan phim s hien thi trang thai 4 led tren terminal
 -Nhan phim r hien thi trang thai 4 led tren terminal
 -Phim 1 dung de dao trang thai led1
 -Phim 2 dung de dao trang thai led2
 -Phim 3 dung de dao trang thai led3
 -Phim 4 dung de dao trang thai led4
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define ON	1
#define OFF	0

int fd;

int main(int argc, char **argv)
{
	int i;
	char key = 0xff;
	int status_led[4] = {0, 0, 0, 0};
	fd = open("/dev/leds", 0);
	if (fd < 0)
	{
		perror("open device leds");
		exit(1);
	}
	for(i = 0; i < 4; i++)
	{
		ioctl(fd, OFF, i);
	}	
	printf( "Nhan phim s de xem trang thai cac led\n" );
	printf( "Nhan phim r de tat cac led\n" );
	printf( "Nhan phim 0,1,2,3 de dao trang thai cac led\n" );
	while(1)
	{
	
		key = getchar();
		sleep(1);
		switch(key) 
		{
			case 'r':
				printf("Cac led deu OFF:\n");
				for(i = 0; i < 4; i++)
				{
					ioctl(fd, OFF, i);
				}
				break;
			case 's':
				printf("Trang thai cac led:\n");
				printf("Led 0:%s, ", status_led[0]==0? "off":"on");
				printf("Led 1:%s, ", status_led[1]==0? "off":"on");
				printf("Led 2:%s, ", status_led[2]==0? "off":"on");
				printf("Led 3:%s\n", status_led[3]==0? "off":"on");
				break;
			case '0':
				status_led[0]=(status_led[0]+1)%2;
				ioctl(fd,status_led[0],0);
				printf("Led 0:%s\n",status_led[0]==0? "off":"on");
				break;			
			case '1':
				status_led[1]=(status_led[1]+1)%2;
				ioctl(fd,status_led[1],1);
				printf("Led 1:%s\n",status_led[1]==0? "off":"on");
				break;
			case '2':
				status_led[2]=(status_led[2]+1)%2;
				ioctl(fd,status_led[2],2);
				printf("Led 2:%s\n",status_led[2]==0? "off":"on");
				break;
			case '3':
				status_led[3]=(status_led[3]+1)%2;
				ioctl(fd,status_led[3],3);
				printf("Led 3:%s\n",status_led[3]==0? "off":"on");
				break;	
		}	
	}			
	close(fd);
	return 0;
}
