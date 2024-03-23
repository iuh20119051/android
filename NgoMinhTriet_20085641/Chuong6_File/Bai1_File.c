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
int main(int argc, char** argv)
{
	int fd;
	char buttons[6]={'0','0','0','0','0','0'};
	fd=open("/dev/buttons",0);
	if(fd<0)
	{
		perror("Open device buttons");
		exit(1);
	}
	FILE*pFile;
	int n=0;
	char display[5];
	while(1)
	{
		char current_buttons[6];
		int i;
		if(read(fd,current_buttons,sizeof current_buttons) != sizeof
current_buttons)
		{
			perror("Read buttons:");
			exit(1);
		}
		for(i=0;i<sizeof buttons/sizeof buttons[0];i++)
		{
			if(buttons[i]!=current_buttons[i])
			{
				buttons[i]=current_buttons[i];
				while(buttons[i]=current_buttons[i]);
				if(i==0){
				n++;				
				pFile=fopen("text.txt","w");
				if(pFile==NULL) perror("Error opening file");
					else
					{
					fputc(n,pFile);
					fclose(pFile);
					}
				}
				if(i==1){
				pFile=fopen("text.txt","r");
				if(pFile==NULL) perror("Error opening file");
					else
					{
					if(fgets(display,5,pFile)!=NULL) puts(display);
					printf("%s\n",display);
					fclose(pFile);
					}
				}
				if(i==2){
				n=0;				
				pFile=fopen("text.txt","w");
				if(pFile==NULL) perror("Error opening file");
					else
					{
					fputc(n,pFile);
					fclose(pFile);
					}
				}
			}
		}
	}
	return 0;
}
		
