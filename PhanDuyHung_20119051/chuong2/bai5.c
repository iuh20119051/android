#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#define ON 1
#define OFF 0
void sangduoi()
{
	ioctl(fd,ON,i);
	ioctl(fd,ON,i);	
	ioctl(fd,ON,i);
	ioctl(fd,ON,i);
}

int main(int argc, char**argv)
{ 
	int fd,i,j;
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
			while(1)
			{
						
				for(i=0; i<=3; i++)
				{
	  			ioctl(fd,ON,i);
	  			usleep(300000);
	  			ioctl(fd,OFF,i);
				}
			}

			break;
		case '2':

			while(1)
			{
						
				
				for(i=0; i<= 3; i++)
				{
			 		ioctl(fd,ON, i);	
				}
				usleep(500000);
				for(j=0; j <= 3; j++)
				{	
			  		ioctl(fd,OFF, j);
				}
				usleep(500000);
			}
;
			break;
		case '3':

			exit(1);
		
		default:
			printf("key:%d invalid\n",key);
			break;
	  	}

	}

	close(fd);
	return 0;
}

