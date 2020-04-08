//transpose of a matrix
#include<stdio.h>
void func(int a[4][3])
{
	int i,j;
	int b[4][3];
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",&b[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	int a[4][3]={1,1,1,1,2,2,2,2,3,3,3,3};
	clrscr();
	func(a);
	getch();
}