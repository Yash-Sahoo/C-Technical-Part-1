//sort characters in a string
#include<stdio.h>
char * sort(char h[])
{       int count=0;
	int c=0,i,j;
	while(h[c]!='\0')
	{
	       count++;
	       c++;
	}

	for(i=0;i<count-1;i++)
	{      int flag=0;
	       for(j=0;j<count-1-i;j++)
	       {
			if(h[j]>h[j+1])
			{
				h[j]=h[j]^h[j+1];
				h[j+1]=h[j]^h[j+1];
				h[j]=h[j]^h[j+1];
				flag=1;
			}
	       }
	       if(flag==0)
	       {
			break;
	       }
	}
	return h;

}
void main()
{
	char *res;
	char s[100];
	int i;
	clrscr();
	printf("Enter a string to sort: "); gets(s);
	res=sort(s);
	printf("%s",res);
	getch();
}