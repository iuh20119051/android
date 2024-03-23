#include<stdio.h>

int main()
{
	FILE*pFile;
	char c='a';
	int b=0;
	pFile = fopen("test.txt","w");
	if(pFile!=NULL)
	{

		do
		{
			//c= 'a';
			fputc(c,pFile);
			b++;
		} while (b !=10 );

		fclose(pFile);
	}
return 0;
}
