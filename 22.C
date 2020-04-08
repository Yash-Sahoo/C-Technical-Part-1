//bubble sort 1 D array
#include<stdio.h>
void main()
{
	int a[10]={33,44,22,11,1,9,8,66,76,55};
	int i,j,y,n=10;
	clrscr();
	for(i=0;i<n-1;i++)
	{       int flag=0;
		for(j=0;j<n-1-i;j++)
		{
		      if(a[j]>a[j+1])
		      {
			a[j]=a[j]+a[j+1];
			a[j+1]=a[j]-a[j+1];
			a[j]=a[j]-a[j+1];
			flag=1;
		      }
		}
		if(flag==0)
		{
			break;
		}
	}
	printf("after sorting.....\n");
	for(y=0;y<10;y++)
	{
		printf("%d \t",a[y]);
	}
	getch();
}