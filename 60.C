//Quick sort
#include<stdio.h>
int partition(int a[],int l,int h)
{
	int pivot=a[l];
	int start=l;
	int end=h;
	while(start<end)
	{
		while(a[start]<pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			a[start]=a[start]^a[end];
			a[end]=a[start]^a[end];
			a[start]=a[start]^a[end];
		}
	}
	pivot=pivot^a[end];
	a[end]=pivot^a[end];
	pivot=pivot^a[end];
	return end;
}
void quicksort(int a[],int l,int h)
{
	if(l<h)
	{
		int loc=partition(a,l,h);
		quicksort(a,l,loc-1);
		quicksort(a,loc+1,h);
	}
}
void main()
{
	int a[5]={90,67,56,45,34};
	int i;
	clrscr();
	quicksort(a,0,4);
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}