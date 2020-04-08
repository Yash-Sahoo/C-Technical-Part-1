//append text in existing file
#include<stdio.h>
void main()
{
	FILE *p;
	char c;
	char ch[200];
	clrscr();
	p=fopen("abc.txt","a+");
	while(!feof(p))
	{
		printf("%c",fgetc(p));
	}
	printf("\n");
	printf("Enter Text to append: \n");
	gets(ch);
	fputs(ch,p);
	printf("\nSuccessfully appended...");
	printf("\n");
	fseek(p,0,0);
	while(!feof(p))
	{
		printf("%c",fgetc(p));
	}
	getch();
}