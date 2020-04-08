//linear search without recursion
#include<stdio.h>
void linearSearch(int a[],int l,int key)
{
	int m,flag=0;
	for(m=0;m<l;m++){
		if(a[m]==key)
		{
			printf("Element found in %d position",m+1);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("Element not found");
	}
}
void main()
{
	int i,key,a[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to search: ");
	scanf("%d",&key);
	linearSearch(a,5,key);
	getch();
}