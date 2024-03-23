#include <stdio.h>
int main()
{
	FILE *pFile;
	char sentence[256];
	printf("Enter sentence to append:");
	fgets(sentence,256,stdin);
	pFile=fopen("mylog.txt","w");
	fputs(sentence,pFile);
	fclose(pFile);
	return 0;
}
