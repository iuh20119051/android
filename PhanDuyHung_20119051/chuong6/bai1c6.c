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

int count = 0;      // bien luu tru so lan nhan nha

// Ham ghi so lan nhan/nha K1 vÃ o file
void writeToFile() {
        FILE *file = fopen("text.txt", "w");
        if (file == NULL) 
        {
             printf("Khong the mo file text.txt.\n");
             exit(1);
        }
        fprintf(file, "%d", count);
        fclose(file);
}

// Ham doc so lan nhan/nha K1 tu file ra man hinh
void readFromFile() {
        FILE *file = fopen("text.txt", "r");
        if (file == NULL) {
        printf("Khong the mo file text.txt.\n");
        exit(1);
        }
        fscanf(file, "%d", &count);
        printf("So lan nhan nut K1: %d\n", count);
        fclose(file);
}

void docfile()
{
FILE *fp;
   char ch;

   // mở file để đọc
   fp = fopen("myfile.txt", "r");
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
	pFile = fopen ("mylog.txt","w");
	fputs (sentence,pFile);
	fclose (pFile);
	//return 0;
	}

int main(int argc, char** argv)
   {
   int buttons_fd;
   char buttons[3] = {'0', '0', '0'};//Mang luu tt nut nhan
   buttons_fd = open("/dev/buttons", 0); //Mo file

   if (buttons_fd < 0) //Kt qua trinh mo file
   {
        perror("open device buttons");
        exit(1);
   }

   while(1)
          {
                int i;
                char current_buttons[3];

                if (read(buttons_fd, current_buttons, sizeof current_buttons) != sizeof current_buttons)
                {
                        perror("read buttons:");
                        exit(1);
                }

                for (i = 0; i < sizeof buttons / sizeof buttons[0]; i++)
                {
                        if (buttons[i] != current_buttons[i])
                        {
                                buttons[i] = current_buttons[i];
                                usleep(200000);

                                if (buttons[0] == '0') 
                                {
                                        printf("K1 moi nhan nha\n");
                                        count++;
                                           writeToFile();
					   docfile();     
                                }

                                if (buttons[1] == '0')
                                {
                                        printf("K2 moi nhan nha\n");
                                        readFromFile();

					suafile();
                                }
                                        
                                if (buttons[2] == '1')
                                {
                                        printf("K3 moi nhan\n");
                                        count = 0;
                                           writeToFile();
                                }

                        }
                }
        }
close(buttons_fd);
return 0;
}
