//print data of a file in console in reverse
#include<stdio.h>
void main()
{
	FILE *p;
	int count=0,i=0;
	char ch[200];
	clrscr();
	p=fopen("xyz.txt","r");
	if(p==NULL)
	{
		printf("File not exists...");
	}
	else{
		while(!feof(p))
		{
			count++;
			ch[i]=fgetc(p);
			i++;
		}
	}
	ch[i]='\0';
	for(i=count;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
	getch();
}