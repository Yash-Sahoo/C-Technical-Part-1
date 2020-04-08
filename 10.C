//swap using call by value
#include<stdio.h>
void swap(int a ,int b)
{
	//a=a+b;
	//b=a-b;
	//a=a-b;
	//printf("First number: %d\n",a);
	//printf("Second number: %d",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("First number: %d\n",a);
	printf("Second number: %d",b);
}
void main()
{
	int a,b;
	clrscr();
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	swap(a,b);
	getch();
}