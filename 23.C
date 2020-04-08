//selection sort
#include<stdio.h>
void main()
{
	int a[]={98,77,66,55,4,3,33,22,11,1};
	int n=10,min,i,j,o;
	clrscr();
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			a[min]=a[i]^a[min];
			a[i]=a[i]^a[min];
			a[min]=a[i]^a[min];
		}
	}
	printf("After sorting....\n");
	for(o=0;o<n;o++)
	{
		printf("%d\t",a[o]);
	}

	getch();
}