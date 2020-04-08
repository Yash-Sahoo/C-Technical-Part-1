//matrix symmetric or not
#include<stdio.h>
void main()
{
	int a[10][10],transpose[10][10],i,j,m,n,count=1;
	clrscr();
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		printf("Enter elements\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",a[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				transpose[j][i]=a[i][j];
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(transpose[i][j]!=a[i][j])
				{
					count++;
					break;
				}
			}
		}
		if(count==1)
		{
			printf("Symmetric matrix\n");
		}
		else{
			printf("Not");
		}
	}else{
		printf("No");
	}
	getch();
}