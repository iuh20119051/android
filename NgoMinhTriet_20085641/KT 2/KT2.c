#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>

#include<sys/ioctl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/select.h>
#include<errno.h>

#define PWM_IOCTL_SET_FREQ 1
#define PWM_IOCTL_STOP 0

#define ON 1
#define OFF 0

int pwm_fd, button_fd,led_fd; // device file
static int freq=1000;
void set_buzzer_freq(int fd,int freq)
{
	int ret = ioctl(fd,PWM_IOCTL_SET_FREQ,freq);
	if(ret<0)
	{
		perror("Set the frequency of the buzzer");
		exit(1);
	}
}
void stop_buzzer(int fd)
{
	int ret=ioctl(fd,PWM_IOCTL_STOP);
	if(ret<0)
	{
		perror("Stop the buzzer");
		exit(1);
	}
	close(fd);
}
void* btn_polling(void* param);
int main(int argc, char** agrv)
{
	
	const char *thread_parms = "button thread";
	pthread_t thread_id; // thread
	FILE * pFile;
	
	char buttons[6] = {'0', '0', '0', '0', '0', '0'};
	int i;
	
	pwm_fd = open("/dev/pwm", 0);
	if (pwm_fd < 0)
	{
		perror("open device pwm_buzzer");
		exit(1);
	}
	else printf("open device led ok\n");
	
	button_fd = open("/dev/buttons", 0); 
	if(button_fd < 0)
	{
		perror("open device buttons");
		exit(1);
	}
	else printf("open device button ok\n");
	
	led_fd = open("/dev/leds", 0);
	if (led_fd < 0)
	{
		perror("open device leds");
		exit(1);
	}
	else printf("open device led ok\n");
	thread_id = pthread_create(&thread_id, NULL, &btn_polling, (void *)thread_parms);
	char c;
	pFile=fopen("alphabet.txt","w");
	if(pFile==NULL) perror("Error opening file");
	else
	{
		for(c='A';c<='Z';c++) fputc(c,pFile);
		fclose(pFile);
	}
	while(1)
	{
		char cur_btn[3], old_btn[3] = {'0', '0','0'};
	int i;
	
	for(;;)
	{
		int num=read(button_fd, cur_btn, sizeof(cur_btn));
		if(num != sizeof(cur_btn))
		{
			perror("read buttons:");
			exit(1);
		}
		
		if(old_btn[0] != cur_btn[0])
		{
			int a;
			pFile=fopen ("myfile.txt","r");
			if (pFile==NULL) perror ("Error opening file");
			else
			{
				do
				{
					a = fgetc (pFile);
					printf(a);
				} while (a != EOF);
				fclose (pFile);
			}
			return 0;
		}
		
		if(old_btn[2] != cur_btn[2])
		{
			
			old_btn[2] = cur_btn[2];
			for(i=0;i<4;i++) ioctl(led_fd, OFF, i);
			if(n==1)
			{
				ioctl(led_fd, ON, i);
			}
			if(n==2)
			{
				for(i=0;i<n;i++) ioctl(led_fd, ON, i);
			}
			if(n==3)
			{
				for(i=0;i<n;i++) ioctl(led_fd, ON, i);
			}
			if(n==4)
			{
				for(i=0;i<n;i++) ioctl(led_fd, ON, i);
			}			
			for(int i=0;i<n;i++)
			{
				set_buzzer_freq(pwm_fd,1000);
				if(n==5)
				{
				for(i=0;i<4;i++) ioctl(led_fd, ON, i);
				}
				usleep(500*1000);
				if(n==5)
				{
				for(i=0;i<4;i++) ioctl(led_fd, OFF, i);
				}
				stop_buzzer(pwm_fd);
			}
			
		}
	}
	}
	close(button_fd);
	close(pwm_fd);
	close(led_fd);
	return 0;
}
void* btn_polling(void* param)
{
	
	int m;
	printf("nhap x: "\n);
	read(m);
	if(m!=NULL) x=m;
	printf("nhap n: "\n);
	read(n);
	if(n>5) n=5;
	if(n<1) n=1;
}
