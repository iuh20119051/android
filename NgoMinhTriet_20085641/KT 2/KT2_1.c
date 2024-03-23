#include <stdio.h>
int main()
{
	FILE*pFile;
	char c;
	pFile=fopen("text.txt","w");
	if(pFile==NULL) perror("Error opening file");
	else
	{
		for(c='0';c<='9';c++) fputc(c,pFile);
		fclose(pFile);
	}
	return 0;
}
