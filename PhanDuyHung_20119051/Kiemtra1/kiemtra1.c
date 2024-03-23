#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#define ON 1
#define OFF 0

int main(int argc, char**argv)
{ 
	int fd,i;
	char key=0xff;
	fd= open("/dev/leds",0);

	if(fd<0)
	{
 		perror ("open device leds");
		exit(1);
	}

	for (i=0; i<=3 ;i++)
        {
		ioctl(fd,ON,i);
	}
	while(1)
	{	

	key = getchar();
	  printf("key:%d\n",key);
	  sleep(1);
		
	  switch(key)
	  {
		

		case '1':
			ioctl(fd,ON,0);
			ioctl(fd,ON,1);
			ioctl(fd,ON,2);
			ioctl(fd,OFF,3);

			usleep(500000);
			break;
		case '2':

			ioctl(fd,ON,0);
			ioctl(fd,ON,1);
			ioctl(fd,OFF,2);
			ioctl(fd,OFF,3);
			usleep(500000);
			break;
		case '3':

			ioctl(fd,ON,0);
			ioctl(fd,OFF,1);
			ioctl(fd,OFF,2);
			ioctl(fd,OFF,3);
			usleep(500000);
			break;
		case '4':

			ioctl(fd,OFF,0);
			ioctl(fd,OFF,1);
			ioctl(fd,OFF,2);
			ioctl(fd,OFF,3);
			usleep(500000);
			break;
		//default:
			//printf("key:%d invalid\n",key);
			//break;
	  	}

	}

	close(fd);
	return 0;
}

