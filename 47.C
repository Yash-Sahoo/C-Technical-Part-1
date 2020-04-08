//student whose marks is more than average marks
#include<stdio.h>
#define MAX 30
typedef struct student
{
	int sno;
	char sname[MAX];
	int marks;
}st[5];
void main()
{
	int tot=0,i,avg;
	struct student s[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter sno of %d student: ",i+1); scanf("%d",&s[i].sno);
		printf("Enter sname of %d student: ",i+1); scanf("%s",&s[i].sname);
		printf("Enter marks of %d student: ",i+1); scanf("%d",&s[i].marks);
	}
	for(i=0;i<5;i++)
	{
		tot=tot+s[i].marks;
	}
	avg=tot/5;
	for(i=0;i<5;i++)
	{
		if(s[i].marks>avg)
		{
			printf("Roll No: %d\n",s[i].sno);
			printf("Name   : %s\n",s[i].sname);
			printf("Marks  : %d\n",s[i].marks);
			printf("-----------------------\n");
		}
	}
	getch();

}