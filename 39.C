//min value using do while loop
#include<stdio.h>
void main()
{
	int a[]={11,3,4,5,1,2};
	int i=-1,j=a[0];
	clrscr();
	do
	{
		if(a[i]<j)
		{
		      j=a[i];
		}
		i++;
	}while(a[i]!='\0');
	printf("Min element: %d",j);
	getch();
}