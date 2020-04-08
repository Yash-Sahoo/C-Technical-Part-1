//string is palindrome or not
#include<stdio.h>
int flag=0;
void palindrome(char a[],char b[])
{
	int i,start,end,count=0;
	while(a[count]!='\0')
		count++;
	end=count-1;
	for(start=0;start<count;start++)
	{
		b[start]=a[end];
		end--;
	}
	b[start]='\0';
	for(i=0;i<count;i++)
	{
		if(a[i]==b[i])
		{
			flag=0;
		}else{
			flag++;
		}
	}
	if(flag==0)
	{
		printf("Palindrome String\n");
	}else{
		printf("Not a palindrome string\n");
	}
}

int main()
{
	char c1[100],c2[100];
	clrscr();
	printf("Enter a string to check: ");
	gets(c1);
	palindrome(c1,c2);
	getch();
	return 1;
}