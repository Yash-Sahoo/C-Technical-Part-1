//linear search using recursion
#include<stdio.h>
int linSearch(int a[],int l,int h,int key)
{
	if(h<l)
		return -1;
	if(a[l]==key)
		return l;
	if(a[h]==key)
		return h;
	return linSearch(a,l+1,h-1,key);
}
void main()
{
	int g,a[5],i,key;
	clrscr();
	printf("Enter elements in array: \n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter element to search: ");
	scanf("%d",&key);
	g=linSearch(a,0,4,key);
	printf("Element found in %d",g+1);
	getch();
}