//grade according to marks
#include<stdio.h>
void main()
{
	int mark,i;
	clrscr();
	printf("Enter marks: ");
	scanf("%d",&mark);
	if(mark>=60)
	{
		printf("FIRST");
	}
	else if(mark>=50 && mark<60){
		printf("SECOND");
	}
	else if(mark>=40 && mark<50){
		printf("THIRD");
	}
	else{
		printf("FAILED");
	}
	getch();
}