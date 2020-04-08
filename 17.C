//leap year or not
#include<stdio.h>
void main()
{
	int year,i;
	clrscr();
	printf("Enter year: ");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0){
		printf("Year is Leap year\n");
	}
	else{
		printf("Year is not a leap year");
	}

	getch();
}