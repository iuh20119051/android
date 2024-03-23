#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define ON 1
#define OFF 0

int main(int argc, char **argv)
{
	int i;
	int fd = open("/dev/leds", 0);
	if (fd < 0)
	{
		perror("open device leds");
		exit(1);
	}
	ioctl(fd, OFF, 0);
	ioctl(fd, OFF, 1);
	ioctl(fd, OFF, 2);
	ioctl(fd, OFF, 3);
	while(1)
	{
		ioctl(fd, ON, 0);
		usleep(400000);
		ioctl(fd, OFF, 0);
		ioctl(fd, ON, 1);
		usleep(400000);
		ioctl(fd, OFF, 1);
		ioctl(fd, ON, 2);
		usleep(400000);
		ioctl(fd, OFF, 2);
		ioctl(fd, ON, 3);
		usleep(400000);
		ioctl(fd, OFF, 3);
		/*for (i=0; i<4;i++)
		{
			ioctl(fd, ON, i);
			usleep(400000);
			i++;
			ioctl(fd, OFF, i);
		}*/
	}
	close(fd);
	return 0;
}
