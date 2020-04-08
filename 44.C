//auto extern static register global
int a=9;
void main()
{
	auto int b=10;
	extern int a;
	static int c=30;
	c=20;
	clrscr();
	//a=b+c;
	printf("%d",a);
	getch();
}