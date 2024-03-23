#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<termios.h>
#include<sys/select.h>
#include<sys/time.h>
#define PWM_SET 1
#define PWM_STOP 0
#define ESC_KEY 0x1b

void set_buzzer_freq(int fd, int freq)
{
	int ret = ioctl(fd, PWM_SET, freq);
	if ( ret <0)
	{
		perror("set the frequency of the buzzer");
		exit(1);
	}
}


void stop_buzzer(int fd)
{
	int ret=ioctl(fd,PWM_STOP);
	if(ret<0)
	{
		perror("stop the buzzer");
		exit(1);
	}
	close(fd);
}


int main( int argc, char** argv)
{
	int fd,freq = 500;
	char key=0xff;
	fd = open("/dev/pwm", 0);

	if (fd < 0)
	{
		perror("open pwm_buzzer device");
		exit(1);
	}

	

	set_buzzer_freq(fd,freq);


	while(1)
	{
		int i;
		for(i=0; i < 1000; i++)
		{
			freq += 100;
			set_buzzer_freq(fd,freq);
			sleep(2);
			if (freq == 2000)
			{
				stop_buzzer(fd);
				break;
	  		}
		}
	}
}

