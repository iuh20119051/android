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
	int fd,freq=1000;
	char key=0xff;
	fd=open("/dev/pwm",0);

	if (fd < 0)
	{
		perror("open pwm_buzzer device");
		exit(1);
	}

	printf("\n BUZZER TEST (PWM Control) \n");
	printf("Press 'ESC+ENTER' key to Exit this program\n\n");

	set_buzzer_freq(fd,freq);
	printf("\tFreq = %d\n",freq);

	while(1)
	{
	  key= getchar();
	  printf("key:%d\n",key);
	  sleep(1);
	  switch(key)
	  {
		case ESC_KEY:
			stop_buzzer(fd);
			exit(0);

		case '+':
			freq += 100;
			printf("\tFreq = %d \n", freq);
			set_buzzer_freq(fd,freq);
			
			break;
		case '-':
			freq -= 100;
			if(freq < 0) freq = 0;
			printf("\tFreq = %d \n", freq);
			set_buzzer_freq(fd,freq);
			break;

		default:
			printf("key:%d invalid\n",key);
			break;
	  }
	}
}

