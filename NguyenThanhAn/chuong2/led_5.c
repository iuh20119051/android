/*
Bai 5: chuong trinh dung ban phim de xem trang thai va dieu khien 4led don 
 -Nhan phim s hien thi trang thai 4 led tren terminal
 -Nhan phim r hien thi trang thai 4 led tren terminal
 -Phim 1 : 4 led chay đuoi theo chu ky voi thoi gian 300ms
 -Phim 2 : 4 led sang tat theo chu ky voi thoi gian 300ms
 -Phim 3 : Dung trang thai đang chay
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
	printf( "Nhan phim 1: 4 led chay đuoi\n" );
	printf( "Nhan phim 2: 4 led sang tat\n" );
	printf( "Nhan phim 3: Dung trang thai đang chay\n" );
	while(1)
	{
		key = getchar();
		sleep(1);
		switch(key) 
		{			
			case '1':
				for(i = 0; i <= 4 ; i++) 
				{
					ioctl(fd, ON, i);
					ioctl(fd, OFF, i-1);
					usleep(300000);
				}
				break;
			case '2':
				ioctl(fd, ON, 0);
				ioctl(fd, ON, 1);
				ioctl(fd, ON, 2);
				ioctl(fd, ON, 3);
				usleep(300000);
				ioctl(fd, OFF, 0);
				ioctl(fd, OFF, 1);
				ioctl(fd, OFF, 2);
				ioctl(fd, OFF, 3);
				usleep(300000);
				break;
			case '3':
				status_led[0]=(status_led[0]+0)%2;
				status_led[1]=(status_led[1]+0)%2;
				status_led[2]=(status_led[2]+0)%2;
				status_led[3]=(status_led[3]+0)%2;
				ioctl(fd,status_led[0],0);
				ioctl(fd,status_led[1],1);
				ioctl(fd,status_led[2],2);
				ioctl(fd,status_led[3],3);
				break;	
		}	
	}			
	close(fd);
	return 0;
}
