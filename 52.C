//copy content of one student into another by structure
#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[20];
	int fees;
}s;
void main()
{
	struct student s1,s2;
	int i;
	clrscr();
	s1.rollno=111;
	printf("Enter name: "); scanf("%s",&s1.name);
	s1.fees=100;
	s2=s1;
	printf("Roll : %d\n",s2.rollno);
	printf("Name : %s\n",s2.name);
	printf("Fees : %d\n",s2.fees);
	getch();
}