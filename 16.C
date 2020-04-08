//swap without third variable
#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	clrscr();
	a=a^b;
	b=a^b;
	a=a^b;
	printf("a %d\n",a);
	printf("b %d",b);
	getch();
}