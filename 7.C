//fibonacci series using recursion
#include<stdio.h>
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return fib(n-1) + fib(n-2);
	}
}
void main()
{
	int n,i,count=0;
	clrscr();
	printf("Enter series no: ");
	scanf("%d",&n);
	printf("Fibonacci Series....\n");
	for(i=1;i<=n;i++){
		printf("%d\t",fib(count));
		count++;
	}
	getch();
}