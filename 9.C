//prime number
#include<stdio.h>
void main()
{
	int n,i,flag=0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=2;i<n/2;i++){
		if(n%i==0){
			flag++;
			break;
		}
	}
	if(flag==0)
	{
		printf("Prime Number");
	}else{
		printf("Not a prime number");
	}
	getch();
}