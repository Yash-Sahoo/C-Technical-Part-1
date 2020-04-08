//sum of digit of a positive integer
#include<stdio.h>
void main()
{
	int sum=0,n,i;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n>=0){
		while(n>0)
		{
			int rem=n%10;
			sum+=rem;
			n/=10;
		}
		printf("Sum is %d",sum);
	}else{
		printf("Number is not positive.");
	}
	getch();
}
