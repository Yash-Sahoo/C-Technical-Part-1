//binary search without using recusion
#include<stdio.h>
void main()
{
	int a[5]={1,2,3,4,5},m;
	int l=0,h=4,mid;
	clrscr();
	printf("Enter element to search : ");
	scanf("%d",&m);
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]==m)
		{
			printf("Element found in %d",mid+1);
			break;
		}
		else if(a[mid]>m)
		{
			h=mid-1;
		}else{
			l=mid+1;
		}
	}
	if(l>h)
	{
		printf("ELement not found.");
	}
	getch();
}