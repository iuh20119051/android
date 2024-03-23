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

//--------------------------------
void set_buzzer_freq(int pwm_fd, int freq)
{
 int ret = ioctl(pwm_fd, PWM_IOCTL_SET_FREQ, freq);
 if(ret <0)
 {
  perror("set the frequency of the buzzer");
  exit(1);
 }
}
//-------------------------------
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
//---------------------------------
 int adc_fd, pwm_fd, buttons_fd, adc_value = -1;
int main(int argc, char**argv)
{
 char buttons[6]={'0', '0', '0', '0', '0', '0'};
 buttons_fd = open("/dev/buttons", 0);
 if(buttons_fd < 0)
 {
  perror("open device buttons");
  exit(1);
 }
//----------------------------
 adc_fd = open("/dev/adc", 0); 
 if (adc_fd < 0) 
 { 
 perror("open ADC device:"); 
 return 1; 
 }
//----------------------------- 
 pwm_fd = open("/dev/pwm", 0);
 if(pwm_fd <0)
 {
  perror("open pwm_buzzer device");
  exit(1);
 }
//-----------------------------
 while(1)
 {
  char current_buttons[6];
  int count_of_changed_key, i;
  if(read(buttons_fd, current_buttons, sizeof current_buttons) != sizeof current_buttons)
  {
   perror("read buttons");
   exit(1);
  }
//--------------------------------
  printf("\nBUZZER TEST (PWM Control)\n");
  printf("Press 'K1 to K6' to Exit this program\n\n");
  set_buzzer_freq(pwm_fd, adc_value);
  printf("/tFreq = %d\n", adc_value);
  char buffer[30];
  int len = read(adc_fd, buffer, sizeof buffer -1);
  if (len > 0)
  {
   buffer[len] = '\0';
   sscanf(buffer, "%d", &adc_value);//doc du lieu theo dinh dang 
   set_buzzer_freq(pwm_fd, adc_value);
  }
  else 
  { 
   perror("read ADC device:"); 
   return 1; 
  }
   usleep(500* 1000);
//----------------------------------
  for(i=0, count_of_changed_key = 0; i < sizeof buttons / sizeof buttons[0]; i++)
  {
   if(buttons[i] != current_buttons[i])
   {
    buttons[i] = current_buttons[i];
    close(adc_fd);
    stop_buzzer(pwm_fd);
   }
  }
 }
  close(buttons_fd);
  return 0;
}
