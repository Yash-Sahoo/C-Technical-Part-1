//reverse some characters in a file
#include<stdio.h>
void main()
{
	FILE *p,*q;
	char ch[200];
	char file[30];
	char c;
	int i=0,tot;
	clrscr();
	printf("Enter file name: "); scanf("%s",&file);
	p=fopen(file,"r");
	if(p==NULL)
	{
		printf("File not Exists...\n");
	}
	else{
		printf("Enter the total characters you want to reverse: ");
		scanf("%d",tot);
		while(!feof(p))
		{
			ch[i]=fgetc(p);
			i++;
		}
		ch[i]='\0';
		fclose(p);
		q=fopen(file,"w");
		for(i=tot-1;i>=0;i--)
		{
			fputc((char)ch[i],q);
		}
		while(ch[tot]!='\0'){
			fputc((char)ch[tot],q);
			tot++;
		}
	}
	fclose(q);
	getch();
}