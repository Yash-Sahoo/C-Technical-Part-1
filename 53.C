//illustrate unions
//structure allocates complete memory for variables
//union allocates memory for the largest variable size only
//other will share the same memory

#include<stdio.h>
union Student
{
	int roll;
	int fees;
	char name[30];
}s;
struct student
{
	int roll;
	int fees;
	char name[30];
}s1;
void main()
{
	clrscr();
	printf("Size of union : %d\n",sizeof(s));
	printf("Size of structure: %d\n",sizeof(s1));
	s.roll=101;
	s.fees=500;
	printf("Roll : %d",s.roll); //it will not give you appropriate data
	//only the last updated value will be stored in union
	getch();
}