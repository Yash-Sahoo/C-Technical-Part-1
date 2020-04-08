//reverse a given number
#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	printf("Reverse number is %d",sum);
	getch();
	return 0;
}