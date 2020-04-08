//function return string length using pointers
#include<stdio.h>
#define MAX_SIZE 100
int lenString(char *c)
{
	int count=0;
	while(*c)
	{
		count++;
		c++;
	}
	return count;
}
void main()
{
	char c[MAX_SIZE];
	int n;
	clrscr();
	printf("Enter a string: ");
	gets(c);
	n=lenString(c);
	printf("Length of string is %d",n);
	getch();
}