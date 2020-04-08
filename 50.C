//calculate salary of employees
#include<stdio.h>
typedef struct emp
{
       char name[30];
       int basic;
       int da;
       int gross;
}e[10];
void main()
{
	int i;
	struct emp e[10];
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter Name of %d employee   : ",i+1); scanf("%s",&e[i].name);
		printf("Enter Basic salary of %d emp: ",i+1); scanf("%d",&e[i].basic);
		printf("-----------------------\n");
	}
	for(i=0;i<10;i++)
	{
		e[i].da=(52*e[i].basic)/100;
		e[i].gross=e[i].basic+e[i].da;
	}
	for(i=0;i<10;i++)
	{
		printf("Employee Name: %s\n",e[i].name);
		printf("Gross Salary : %d\n",e[i].gross);
		printf("-----------------------\n");
	}
	getch();

}