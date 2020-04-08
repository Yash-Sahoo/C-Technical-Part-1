//function return max value of array
#include<stdio.h>
int high(int a[])
{
	int i,max=a[0],l=0;
	while(a[l]!='\0')
	{
		l++;
	}
	for(i=0;i<l;i++)
	{
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
void main()
{
	int a[]={1,2,3,4,5,2};
	int max;
	clrscr();
	max=high(a);
	printf("Maximum is %d",max);
	getch();
}