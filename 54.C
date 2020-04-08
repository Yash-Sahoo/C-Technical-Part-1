//pointer to a structure
#include<stdio.h>
typedef struct student
{
	int roll;
	int fees;
	int mob;
}stu;
void main()
{
	stu s;
	stu *p;
	clrscr();
	p=&s;
	p->roll=111;
	p->fees=1000;
	p->mob=9900;
	printf("Roll No: %d\n",p->roll);
	printf("Fees   : %d\n",p->fees);
	printf("Mobile : %d\n",p->mob);
	getch();
}