//copy content from one file to another
#include<stdio.h>
void main()
{
	FILE *p,*q;
	int i;
	char ch;
	clrscr();
	p=fopen("abc.txt","r");
	q=fopen("xyz.txt","w");
	if(p==NULL)
	{
		printf("File Not Exists...\n");
	}else
	{
		while(!feof(p))
		{
			ch=fgetc(p);
			fputc(ch,q);
		}
		printf("Sucessfully copied...");
	}
	fclose(p);
	fclose(q);
	getch();
}