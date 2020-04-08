//insertion sort
#include<stdio.h>
void main()
{
	int a[]={9,8,7,6,5,4,3,2,1,0};
	int n=10,i,j,temp,p;
	clrscr();
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("Sorted array...\n");
	for(p=0;p<10;p++)
	{
		printf("%d\t",&a[p]);
	}
	getch();
}