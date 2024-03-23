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
int c='a';
int buttons_fd;
char buttons[4] = {'0', '0', '0', '0'};
int main ()
{
	int i;
	
	FILE * pFile;
	
	pFile = fopen ("test.txt","w");
	fputc(c,pFile);
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
				if(buttons[0] == '0' && k1_pre == 1)
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
			}
			
		}
	}
	return 0;
}
