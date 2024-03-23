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

int buttons_fd;
int leds_fd;
int count = 0
FILE * pFile;
void process_k1()
{
	int c;
	int n = 0;
	pFile = fopen ("input.txt","r");
	if(pFile == NULL) perror ("Error opening file");
	fclose(pFile);
	do
   	{
		c = fgetc (pFile);
		if (c == 'a') n++;
   	} 
	while (c != EOF);
   	fclose (pFile);
   	printf ("So ky tu 'a' co trong file la: %d\n",n);
}

void process_k2()
{
	int c;
	pFile = fopen ("input.txt","wb");
	if(pFile == NULL) perror ("Error opening file");
	fclose(pFile);
	do
   	{
		c = fgetc (pFile);
		if (c == '$') n++;
   	} 
	while (c != EOF);
   	fclose (pFile);
   	printf ("So ky tu 'a' co trong file la: %d\n",n);
}

void process_k3()
{
	pFile = fopen ( "input.txt" , "wb" );
	fseek ( pFile , -1 , SEEK_SET );
	fputs ( "The end" , pFile );
	fclose ( pFile );
}

int main(void)
{
	char buttons[3] = {'0', '0', '0'};
	char current_buttons[3];
	int i;
	buttons_fd = open("/dev/buttons", 0);
	if (buttons_fd < 0) {
		perror("open device buttons");
		exit(1);
	}

	while (1) 
	{

		if (read(buttons_fd, current_buttons, sizeof current_buttons) != sizeof current_buttons) {
			perror("open device buttons error:");
			exit(1);
		}
		for (i = 0; i < sizeof buttons / sizeof buttons[0]; i++) {
			if (buttons[i] != current_buttons[i]) {
				buttons[i] = current_buttons[i];
				//kiem tra
				if(current_buttons[0]=='1')
					process_k1();//k1 pressed
				else if (current_buttons[1]=='1')
					process_k2(); //k2 pressed
				else if (current_buttons[2]=='1')
					process_k3(); //k3 pressed
			}
		}
	}
	close(buttons_fd);
	return 0;
}

