#include <stdio.h>
int main()
{
	FILE*pFile;
	char mystring[100];
	pFile=fopen("myfile.txt","r");
	if(pFile==NULL) perror("Error opening file");
	else
	{
		if(fgets(mystring,100,pFile)!=NULL) puts(mystring);
		fclose(pFile);
	}
	return 0;
}
		
