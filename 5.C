//factorial of a given number
#include<stdio.h>
int main()
{
	int n,i,sum=1;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		sum=sum*i;
	}
	printf("Factorial of %d is %d",n,sum);
	getch();
	return 0;
}