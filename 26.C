//min and max element of array
#include<stdio.h>
void main()
{
	int a[]={3,1,6,7,5,4,32,2,66,33};
	int min=a[0];
	int max=a[0],i;
	clrscr();
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Smallest element: %d\n",min);
	printf("Largest element: %d",max);
	getch();
}