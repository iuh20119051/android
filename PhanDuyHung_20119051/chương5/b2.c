#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <linux/fs.h> 
#include <errno.h> 
#include <string.h> 

#define PWM_IOCTL_SET_FREQ 1
#define PWM_IOCTL_STOP 0
#define ESC_KEY 0x1b

void set_buzzer_freq(int pwm_fd, int freq)
{
 int ret = ioctl(pwm_fd, PWM_IOCTL_SET_FREQ, freq);
 if(ret <0)
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
  perror("stop the buzer");
  exit(1);
 }
 close(pwm_fd);
}
 int adc_fd, pwm_fd, freq=0;
int main(int argc, char**argv)
{
 char key=0xff;
 printf("Press Ctrl-C to stop\n"); 
 int adc_fd = open("/dev/adc", 0); 
 if (adc_fd < 0) 
 { 
 perror("open ADC device:"); 
 return 1; 
 } 
 pwm_fd = open("/dev/pwm", 0);
 if(pwm_fd <0)
 {
  perror("open pwm_buzzer device");
  exit(1);
 }

 printf("\nBUZZER TEST (PWM Control)\n");
 printf("Press 'ESC+ENTER' ket to Exit this program\n\n");
 set_buzzer_freq(pwm_fd, freq);
 printf("/tFreq = %d\n", freq);
 while(1)
 {
  key = getchar();
  printf("Key: %d\n", key);
  sleep(1);
  char buffer[30];
  int len = read(adc_fd, buffer, sizeof buffer -1);
  if (len > 0)
  {
   buffer[len] = '\0';
   int value = -1;
   sscanf(buffer, "%d", &value);//doc du lieu theo dinh dang 
   if((value >= 0) & (value < 400))
    set_buzzer_freq(pwm_fd, 400);
   else if((value >= 400) & (value < 800))
    set_buzzer_freq(pwm_fd, 800);
   else if((value >= 800) & (value < 1023))
    set_buzzer_freq(pwm_fd, 1200);
  }
  else 
  { 
   perror("read ADC device:"); 
   return 1; 
  }
   usleep(500* 1000); 
  switch(key)
  {
   case ESC_KEY:
    stop_buzzer(pwm_fd);
    close(adc_fd);
    exit(0);
   default:
    printf("Key: %d invalib\n", key);
    break;
  }
 }
}
