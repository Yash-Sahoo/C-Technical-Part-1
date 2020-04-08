//binary search using recursion
#include<stdio.h>
int binSearch(int a[],int l,int h,int key)
{
	if(l==h){
		if(a[l]==key)
			return l;
		else{
			return 0;
		}
	}
	else{
		int mid;
		mid=(l+h)/2;
		if(key==a[mid]){
			return mid;
		}
		if(key<a[mid])
		{
			return binSearch(a,l,mid-1,key);
		}
		else{
			return binSearch(a,mid+1,h,key);
		}
	}
}
void main()
{
	int m,a[5],i,key;
	clrscr();
	printf("Enter elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to search: ");
	scanf("%d",&key);
	m=binSearch(a,0,4,key);
	printf("Element found in %d",m+1);
	getch();
}