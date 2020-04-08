//power using recursion
#include<stdio.h>
int power(a,b)
{
	if(b==0){
		return 1;
	}else if(b==1){
		return a;
	}else{
		return a*power(a,b-1);
	}
}
void main()
{
	int n;
	clrscr();
	n=power(2,6);
	printf("%d",n);
	getch();

}