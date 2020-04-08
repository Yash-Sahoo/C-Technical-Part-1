////1+1/2+1/3+....
#include<stdio.h>
void main()
{
	int n=5;
	double i,ans=0.0;
	clrscr();
	printf("Enter a range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ans=ans+(1/i);
	}
	printf("Ans: %f",ans);
	getch();
}