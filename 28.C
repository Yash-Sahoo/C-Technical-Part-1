//pascals triangle
#include<stdio.h>
void main()
{
	int line,i,p;
	clrscr();
	for(line=1;line<=6;line++)
	{
		int c=1;
		for(p=6;p>line;p--)
		{
			printf(" ");
		}
		for(i=1;i<=line;i++)
		{
			printf("%d ",c);
			c=c*(line-i)/i;
		}
		printf("\n");
	}
	getch();
}