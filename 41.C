//string identical or not
#include<stdio.h>
#define MAX_SIZE 100
int mystr(char *c1,char *c2);
void main()
{
	char c1[MAX_SIZE],c2[MAX_SIZE];
	int i,flag;
	clrscr();
	printf("Enter first string "); gets(c1);
	printf("Enter second string "); gets(c2);
	//flag=mystr(c1,c2);
	flag=strcom(c1,c2);
	if(flag==0)
	{
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	getch();
}
int mystr(char *c1,char *c2)
{
	while(*c1==*c2)
	{
		if(*c1=='\0' || *c2=='\0')
		{
			break;
		}
		c1++; c2++;
	}
	if(*c1=='\0' && *c2=='\0')
	{
		return 0;
	}
	else{
		return 1;
	}
}
int strcom(char c1[],char c2[])
{
	int c=0;
	while(c1[c]==c2[c])
	{
		if(c1[c]=='\0' || c2[c]=='\0')
		{
			break;
		}
		c++;
	}
	if(c1[c]=='\0' && c2[c]=='\0')
	{
		return 0;
	}
	else{
		return 1;
	}
}