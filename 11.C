//interchange using call by reference
#include<stdio.h>
void swap(int *p1,int *p2)
{
	*p1=*p1 ^ *p2;
	*p2=*p1 ^ *p2;
	*p1=*p1 ^ *p2;
	printf("First value: %d\n",*p1);
	printf("Second value: %d",*p2);
}
void main()
{
	int n1,n2;
	clrscr();
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	swap(&n1,&n2);

	getch();
}