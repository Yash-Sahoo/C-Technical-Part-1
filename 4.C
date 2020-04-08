//fabonacci series
#include<stdio.h>
int main()
{
	int n,a=0,b=1,i,c=0;
	clrscr();
	printf("Enter a number upto you want a series of fibinacci: ");
	scanf("%d",&n);
	if(n==1){
		printf("%d",a);
	}else if(n==2){
		printf("%d,%d",a,b);
	}
	else if(n>2){
		printf("%d,%d",a,b);
		for(i=2;i<n;i++)
		{
			c=a+b;
			printf(",%d",c);
			a=b;
			b=c;
		}
	}
	getch();
	return 0;
}