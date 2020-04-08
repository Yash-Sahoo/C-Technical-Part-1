//sum of elements in array using malloc
#include<stdio.h>
void main()
{
	int n,sum=0,i;
	int *a;
	clrscr();
	printf("Enter the size of array: ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("Enter elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++)
	{
		sum=sum + *(a+i);
	}
	printf("Sum of elements: %d",sum);
	free(a);
	getch();
}