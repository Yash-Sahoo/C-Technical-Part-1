//armstrong number or not
#include<stdio.h>
#include<math.h>
void main()
{
	int count=0,no,i,temp;
	int sum=0;
	clrscr();
	printf("Enter a number: "); scanf("%d",&no);
	temp=no;
	while(temp!=0)
	{
		temp=temp/10;
		++count;
	}
	printf("count %d\n",count);
	temp=no;
	while(temp!=0)
	{
		int rem=temp%10;
		sum=sum+pow(rem,count);
		temp=temp/10;
	}
	printf("Sum is %d\n",sum);
	printf("Number is %d",no);

	getch();
}