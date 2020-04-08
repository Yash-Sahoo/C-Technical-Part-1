//nCr
#include<stdio.h>
int fact(int no);
void main()
{
	int n,r,ncr;
	clrscr();
	printf("Enter value of n: "); scanf("%d",&n);
	printf("Enter value of r: "); scanf("%d",&r);
	ncr=fact(n)/(fact(r)*fact(n-r));
	printf("Result: %d",ncr);
	getch();
}
int fact(int no)
{
	if(no>=1)
	{
		return no*fact(no-1);
	}
	else{
		return 1;
	}
}