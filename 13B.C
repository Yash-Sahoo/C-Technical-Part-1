//pattern 2
#include<stdio.h>
void main()
{
	int count=1;
	int i,j,k;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(j=4;j>i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}
	getch();
}