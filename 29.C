#include<stdio.h>
void func(char a[],int l)
{
	int p;
	for(p=0;p<l;p++)
	{
		if(a[p]>= 'A' && a[p] <= 'Z')
		{
			a[p]=a[p]+32;
		}
		if(a[p]>='a' && a[p]<='z')
		{
			a[p]=a[p]-32;
		}
	}
	for(p=0;p<l;p++)
	{
		printf("%c",a[p]);
	}
}
void main()
{
	char a[100];
	int length;
	clrscr();
	printf("Enter string: ");
	gets(a);
	length=strlen(a);
	func(a,length);

	getch();
}