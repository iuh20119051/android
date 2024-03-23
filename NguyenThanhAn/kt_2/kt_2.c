#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/select.h>
#include <sys/time.h>
#include <errno.h> 
#include <unistd.h>
#include <termios.h>

#define PWM_IOCTL_SET_FREQ 1
#define PWM_IOCTL_STOP 0
#define ON 1
#define OFF 0

int buttons_fd;
int leds_fd;
int pwm_fd;
char mess[] = "chao cac ban";
char buttons[4] = {'0', '0', '0', '0'};

int k1_pre = 0;
int k2_pre = 0;
int k3_pre = 0;
int count = 0;
void set_buzzer_freq(int pwm_fd, int freq)
{
	// this IOCTL command is the key to set frequency
	int ret = ioctl(pwm_fd, PWM_IOCTL_SET_FREQ, freq);
	if(ret < 0)
	{
		perror("set the frequency of the buzzer");
		exit(1);
	}
}

void stop_buzzer(int pwm_fd)
{
	int ret = ioctl(pwm_fd, PWM_IOCTL_STOP);
	if(ret < 0)
	{
		perror("stop the buzzer");
		exit(1);
	}
	close(pwm_fd);
}

int main ()
{
	FILE * pFile;
	int freq = 1000 ;
	buttons_fd = open("/dev/buttons", 0);
 	if (buttons_fd < 0)
	{
 		perror("open device buttons");
 		exit(1);
 	}
	pwm_fd = open("/dev/pwm", 0);
	if (pwm_fd < 0)
	{
		perror("open pwm_buzzer device");
		exit(1);
	}
	leds_fd = open("/dev/leds", 0);
	if (leds_fd < 0)
	{
		perror("open device leds");
		exit(1);
	}
	char c='a';
	int i;
	pFile = fopen ("test.txt","w");
	if (pFile!=NULL)
	{
		for (i = 0 ; i < 9 ; i++)
		fputc ( c , pFile );
		fclose (pFile);
		
	}
	while(1) 
 	{
 		char current_buttons[4];
 		int is;
 		//Đọc trạng thái các nút bấm
 		if (read(buttons_fd, current_buttons, sizeof current_buttons) != sizeof current_buttons)
		{
 			perror("read buttons:");
 			exit(1);
 		}
 		//Kiểm tra trạng thái các nút bấm và in ra trạng thái phù hợp (Key up hay Key down)
 		for (i = 0; i < sizeof buttons / sizeof buttons[0]; i++)
		{
			if (buttons[i] != current_buttons[i])
			{
 				buttons[i] = current_buttons[i];
 				if(buttons[0] == '1' )
				{	
					k1_pre = 1;
				}
				else if(buttons[1] == '1')
				{	
					k2_pre = 1;
				}
				else if(buttons[2] == '1')
				{	
					k3_pre = 1;
				}
				else if(buttons[0] == '0' && k1_pre == 1)
				{
					char c;
					pFile = fopen ("test.txt" , "r");
					if (pFile == NULL) perror ("Error opening file");
					while((c=fgetc(pFile)) != EOF)
					{
						printf("%c",c);
					}
					printf("\n");
					fclose (pFile);	
					k1_pre = 0;
					
				}
				else if(buttons[1] == '0' && k2_pre == 1)
				{
					pFile = fopen ("test.txt","w");
					if (pFile == NULL) perror ("Error opening file");
					fputc ( mess , pFile );
					fclose(pFile);
					k2_pre = 0;
				}
				else if(buttons[2] == '0' && k3_pre ==1)
				{
					int n;
					printf("Nhap vao n:");
					scanf("%d",&n);
					set_buzzer_freq(pwm_fd, freq);
					for(i=0; i<n; i++)
					{
						usleep(500* 1000); //ms
						set_buzzer_freq(pwm_fd, freq);
					}
					if(n==1)
					{
						ioctl(leds_fd, ON, 0);
						ioctl(leds_fd, OFF, 1);
						ioctl(leds_fd, OFF, 2);
						ioctl(leds_fd, OFF, 3);		
					}
					else if(n==2)
					{
						ioctl(leds_fd, ON, 0);
						ioctl(leds_fd, ON, 1);
						ioctl(leds_fd, OFF, 2);
						ioctl(leds_fd, OFF, 3);
					}
					else if(n==3)
					{
						ioctl(leds_fd, ON, 0);
						ioctl(leds_fd, ON, 1);
						ioctl(leds_fd, ON, 2);
						ioctl(leds_fd, OFF, 3);
					}
					else if(n==4)
					{
						ioctl(leds_fd, ON, 0);
						ioctl(leds_fd, ON, 1);
						ioctl(leds_fd, ON, 2);
						ioctl(leds_fd, ON, 3);
					}
					else if(n==5)
					{	
						while(1)
						{
							ioctl(leds_fd, ON, 0);
							ioctl(leds_fd, ON, 1);
							ioctl(leds_fd, ON, 2);
							ioctl(leds_fd, ON, 3);
							// tat
							sleep(1);
							ioctl(leds_fd, OFF, 0);
							ioctl(leds_fd, OFF, 1);
							ioctl(leds_fd, OFF, 2);
							ioctl(leds_fd, OFF, 3);
						}
					}
					else
					{
						ioctl(leds_fd, OFF, 0);
						ioctl(leds_fd, OFF, 1);
						ioctl(leds_fd, OFF, 2);
						ioctl(leds_fd, OFF, 3);		
					}
					k3_pre = 0;
				}
 			}
 		}
 	}
 	close(buttons_fd);
	return 0;
}
