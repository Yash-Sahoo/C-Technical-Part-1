//compare two structure variables
#include<stdio.h>
typedef struct stu
{
	char name[30];
	int fees;
}s;
void main()
{
	struct stu s1;
	struct stu s2;
	clrscr();
	s1.fees=100;
	s2.fees=100;
	if(s1.fees==s2.fees)
	{
		printf("Equal");
	}else{
		printf("Not Equal");
	}
	getch();
}