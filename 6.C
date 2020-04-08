//factorial using recursion
#include<stdio.h>
int fact(int n){
	if(n>=1){
		return n*fact(n-1);
	}else{
		return 1;
	}
}
int main()
{
	int no;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&no);
	printf("Factorial of %d is %d",no,fact(no));
	getch();
	return 0;
}