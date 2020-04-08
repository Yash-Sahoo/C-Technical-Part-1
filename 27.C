//min and max in 2D array
#include<stdio.h>
void main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int min=a[0][0];
	int max=a[0][0],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
			if(a[i][j]<min)
			{
				min=a[i][j];
			}
		}
	}
	printf("%d is high\n",max);
	printf("%d is low.",min);
	getch();
}