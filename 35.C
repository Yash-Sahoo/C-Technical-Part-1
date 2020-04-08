//string copy using pointer
#include<stdio.h>
#define MAX_SIZE 100
void copyString(char *c2,char *c1)
{
	while(*c1)
	{
		*c2=*c1;
		c1++;
		c2++;
	}
	*c2='\0';
}
void main()
{
	char c1[MAX_SIZE];
	char c2[MAX_SIZE];

	clrscr();
	printf("Enter a string: ");
	gets(c1);
	copyString(c2,c1);

	printf("First string: %s\n",c1);
	printf("Second string: %s",c2);
	getch();
}