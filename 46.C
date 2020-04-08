//structure for real and imaginary number
#include<stdio.h>
typedef struct complex{
	float real;
	float img;
}complex;
complex sub(complex n1,complex n2)
{
	complex temp;
	temp.real=n1.real-n2.real;
	temp.img=n1.img-n2.img;
	return temp;
}
complex mul(complex n1,complex n2)
{
	complex temp;
	temp.real=n1.real*n2.real;
	temp.img=n1.img*n2.img;
	return temp;
}
complex add(complex n1,complex n2)
{
	complex temp;
	temp.real=n1.real+n2.real;
	temp.img=n1.img+n2.img;
	return temp;
}
void main()
{
	complex n1,n2,result;
	clrscr();
	printf("Enter first complex number:\n");
	printf("Enter real and imaginary part: ");
	scanf("%f %f",&n1.real,&n1.img);
	printf("Enter second complex number: \n");
	scanf("%f%f",&n2.real,&n2.img);
	result=add(n1,n2);
	printf("Sum is %.1f + %.1fi\n",result.real,result.img);
	result=sub(n1,n2);
	printf("Subtraction %.1f + %.1fi\n",result.real,result.img);
	result=mul(n1,n2) ;
	printf("Multiplication is %.1f + %.1fi",result.real,result.img);
	getch();
}