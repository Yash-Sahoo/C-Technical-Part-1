//count no of words, lines, and characters in a file
#include<stdio.h>
void main()
{
	FILE *p;
	char c;
	int words=0,lines=0,ch=0;
	clrscr();
	p=fopen("abc.txt","r");
	if(p==NULL)
	{
		printf("File Not Exists...\n");
	}
	else{
		while(!feof(p))
		{
			c=fgetc(p);
			if(c==' '||c=='\n')
			{
				words++;
			}
			if(c=='\n')
			{
				lines++;
			}
			ch++;
		}
		printf("Characters: %d\n",ch);
		printf("Words : %d\n",words+1);
		printf("Lines : %d\n	",lines+1);
	}
	getch();
}