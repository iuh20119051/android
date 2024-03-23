#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define ON 1
#define OFF 0

int fd;

int main(int argc, char **argv)
{
	int i;
	fd = open("/dev/leds", 0);
 	if (fd < 0)
 	{
 		perror("open device leds");
		exit(1);
 	}
 	while(1)
 	{
 		for(i = 0; i <= 4 ; i++) 
		{
			ioctl(fd, ON, i);
			ioctl(fd, OFF, i-1);
			usleep(400000);
		}
 	}
 	close(fd);
 	return 0;
}
