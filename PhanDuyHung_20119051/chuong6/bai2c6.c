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
#include <termios.h> 


#define ON 1 
#define OFF 0

#define PWM_IOCTL_SET_FREQ 1 
#define PWM_IOCTL_STOP 0 
#define ESC_KEY 0x1b 

void docfile()
{
FILE *fp;
   char ch;

   // mở file để đọc
   fp = fopen("test.txt", "r");
   if (fp == NULL) 
	{
     	printf("Không thể mở file \n");
      	//return 0;
   	}

   // đọc và hiển thị nội dung của file
   while ((ch = fgetc(fp)) != EOF)
      printf("%c", ch);

   fclose(fp);
   // return 0;

}

void suafile()
	{
	FILE * pFile;
	char sentence [256];
	printf ("Enter sentence to append: ");
	fgets (sentence,256,stdin);
	pFile = fopen ("test.txt","w");
	fputs (sentence,pFile);
	fclose (pFile);
	//return 0;
	}
void stop_buzzer(int fd) 
{ 
         int ret = ioctl(fd, PWM_IOCTL_STOP); 
         if(ret < 0) 
         { 
                 perror("stop the buzzer"); 
                exit(1); 
         } 
         close(fd); 
} 
 

int fd_led, fd_button;    // Khoi tao 2 bien mo led va button

void MO_BUTTON_LED()      // tao 1 ham dung de mo led va button
{
         fd_button = open("/dev/buttons", 0); 
         fd_led = open("/dev/leds", 0); 
         if (fd_led < 0) 
         { 
                 perror("open device leds"); 
                 exit(1); 
         }
         else if(fd_button < 0) 
         { 
                 perror("open device buttons"); 
                 exit(1); 
         }
}

int main()
{

        int fd;
        close(fd_button); 
        close(fd);
        close(fd_led);
         fd = open("/dev/pwm", 0); 
         if (fd < 0) 
         { 
                 perror("open pwm_buzzer device"); 
                 exit(1); 
         } 

        FILE *file;
        char c;
        char MYstring[200];
        int i=0;
        int n;

        int j;
        file = fopen("test.txt","w");
        if(file != NULL)
        {
                fputc('0',file);
                fputc('1',file);
                fputc('2',file);
                fputc('3',file);
                fputc('4',file);
                fputc('5',file);
                fputc('6',file);
                fputc('7',file);
                fputc('8',file);
                fputc('9',file);
                fclose(file);
        }
        MO_BUTTON_LED();



        int stt[4] = {0,0,0,0};
        char buttons[4] = {'0', '0', '0', '0'};


        for(i=0; i<4; i++) ioctl(fd, OFF, i);

        while(1) 
        { 
                char current_buttons[4]; 
                int status[4] = {0,0,0,0};
                int i; 
                int j;
                if (read(fd_button, current_buttons, sizeof current_buttons) != sizeof current_buttons)   // Kiem tra so button khai bao co hop le khong
                { 
                         perror("read buttons:"); 
                         exit(1); 
                } 
                for (i = 0; i < sizeof buttons / sizeof buttons[0]; i++)
                { 
                        if (buttons[i] != current_buttons[i]) 
                        {
stt[i] ++;      // Neu nhan thi lap tuc thuc hien, khong doi nha
                        } 
                } 
                if(getchar() == 'q' || getchar() == 'Q') break;     // Khi nhan q hoac Q thi thoat
                if(stt[0] == 1)                                     // kiem tra trang thai k0 co nhan khong
                {  
                        suafile();                                
                }
                
                scanf("%d",&n);
                if(n > 0 && n < 6) 
                {
                        if(stt[2] == 1)                                     // kiem tra trang thai k2 co nhan khong
                        {  
				  
                    	docfile();
                         }
                                n = 0;
                                stt[2] = 0;                                 // reset gia tri nut nhan
                        }
                }
        
         } 


        close(fd_button); 
        close(fd);
        close(fd_led);
        
        return 0;
        
}
