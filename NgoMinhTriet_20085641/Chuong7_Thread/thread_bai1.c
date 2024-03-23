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

int pwm_fd, button_fd; // device file
int freq=500;
static int t = 1000;
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
	/*Bien cau truc chua tham so se truyen cho ham xu ly cua thread*/
	const char *thread_parms = "button thread";
	pthread_t thread_id; // thread
	//Mang chua gia tri trang thai 6 button se doc
	char buttons[6] = {'0', '0', '0', '0', '0', '0'};
	int i;
	//Mo thiet bi (led port), can kiem tra chinh xac ten trong /dev
	pwm_fd = open("/dev/pwm", 0);
	if (pwm_fd < 0)
	{
		perror("open device pwm_buzzer");
		exit(1);
	}
	else printf("open device pwm ok\n");
	//Mo thiet bi (button port)
	button_fd = open("/dev/buttons", 0); //mo button port
	if(button_fd < 0)
	{
		perror("open device buttons");
		exit(1);
	}
	else printf("open device button ok\n");
	thread_id = pthread_create(&thread_id, NULL, &btn_polling, (void *)thread_parms);
	//Ban dau tat ca cac led deu off
	set_buzzer_freq(pwm_fd,freq);
	while(1)
	{
		set_buzzer_freq(pwm_fd,freq);
		usleep(t*1000);
		freq=freq+100;
		if (freq>3000) stop_buzzer(pwm_fd);
	}
	stop_buzzer(pwm_fd);	
	close(button_fd);
	close(pwm_fd);
	return 0;
}
void* btn_polling(void* param)
{
	/*const char thread_parms* = "button thread";*/
	char cur_btn[2], old_btn[2] = {'0', '0'};
	int i;
	/*Lien tuc tham do trang thai nut bam (K1, K2 co duoc an)*/
	for(;;)
	{
		int num=read(button_fd, cur_btn, sizeof(cur_btn));
		if(num != sizeof(cur_btn))
		{
			perror("read buttons:");
			exit(1);
		}
		//Doc K1
		if(old_btn[0] != cur_btn[0])
		{
			sleep(1);
			old_btn[0] = cur_btn[0];
			t = t+100; 			
			printf("K1 is pressed/released t = %dms\n",t);
		}
		//Doc K2
		if(old_btn[1] != cur_btn[1])
		{
			sleep(1);
			old_btn[1] = cur_btn[1];
			t = t-100; 
			if(t<100) t=100;
			printf("K2 is pressed/released t = %dms\n",t);
		}
	}
}
