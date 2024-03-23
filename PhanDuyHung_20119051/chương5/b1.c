#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <sys/types.h> 
#include <sys/stat.h> 
#include <sys/ioctl.h> 
#include <fcntl.h> 
#include <linux/fs.h> 
#include <errno.h> 
#include <string.h> 

#define ON 1
#define OFF 0

int i, j;

int main(void)
{
  char current_buttons[4];
  int count_of_changed_key;
 printf("Press Ctrl-C to stop\n");
 int fd = open("/dev/adc", 0);
 int led_fd = open("/dev/leds", 0);
 int button_fd = open("/dev/buttons", 0);
 char buttons[4]={'0', '0', '0', '0'};
 if (fd < 0)
 {
  perror("open ADC device:");
  return 1;
 }
 if(led_fd<0)
 {
  perror("open leds device:");
  return 1;
 }
 if(button_fd<0)
 {
  perror("open buttons devices:");
  return 1;
 }
 while(1)
 {
    for(i=0; i<=3; i++)
    {
     ioctl(led_fd, OFF, i);
    }

  char buffer[30];
  int len = read(fd, buffer, sizeof buffer -1);
  if (len > 0)
  {
   buffer[len] = '\0';
   int value = -1;
   sscanf(buffer, "%d", &value);//doc du lieu theo dinh dang 
   if((value >= 0) & (value < 128))
   {
    ioctl(led_fd, ON, 0);
   }
   else if((value >= 128) & (value < 256))
   {
    ioctl(led_fd, ON, 1);
   }
   else if((value >= 256) & (value < 512))
   {
    ioctl(led_fd, ON, 2);
   }
   else if((value >= 512) & (value <=1023))
   {
    ioctl(led_fd, ON, 3);;
   }
   else
   {
    for(i=0; i<=3; i++)
    {
     ioctl(led_fd, OFF, i);
    }
  if(read(button_fd, current_buttons, sizeof current_buttons) != sizeof current_buttons)
  {
   perror("read buttons");
   exit(1);
  }
  for(j=0, count_of_changed_key = 0; j < sizeof buttons / sizeof buttons[0]; j++)
  {
   if(buttons[j] != current_buttons[j])
   {
    switch (i)
    {
    case 0:
      current_buttons[j] = current_buttons[j];
      for(i=0; i<=3; i++)
      {
        ioctl(led_fd, OFF, i);
      }
     default:
      break;
    }
   }
    count_of_changed_key++;
   }
  }
  if(count_of_changed_key)
  {
   printf("\n");
  }
}
 else
 {
  perror("read ADC device:");
  return 1;
 }
  usleep(500* 1000);
 }
 close(fd);
 close(led_fd);
 close(button_fd);
 return 0;
}
