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
	for (i=0;i<16;i++)
	{
		i++;
		ioctl(fd, ON, i);
		sleep(20000);
		ioctl(fd, OFF, i);
		sleep(20000);
	}
	close(fd);
	return 0;
}
