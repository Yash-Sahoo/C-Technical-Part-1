//gcd using recursion
#include<stdio.h>
int gcd(int n1,int n2){
	if(n1==n2)
	{
		return n1;
	}else if(n1>n2)
	{
		return gcd(n1-n2,n2);
	}else{
		return gcd(n1,n2-n1);
	}
}
void main()
{
	int n1,n2;
	clrscr();
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	printf("HCF is %d",gcd(n1,n2));
	getch();
}