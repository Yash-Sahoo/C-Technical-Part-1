//structure implemented library management
#include<stdio.h>
typedef struct book{
	int accessno;
	char authorname[30];
	char title[30];
	int year;
	char publishname[30];
	int price;
}b[3];
void main()
{
	int i;
	struct book b[3];
	clrscr();
	for(i=0;i<3;i++)
	{
	      printf("Enter accessno: ");  scanf("%d",&b[i].accessno);
	      printf("Enter author name: "); scanf("%s",&b[i].authorname);
	      printf("Enter title of book: "); scanf("%s",&b[i].title);
	      printf("Enter Year of publication: "); scanf("%d",&b[i].year);
	      printf("Enter publisher name: "); scanf("%s",&b[i].publishname);
	      printf("Enter book price: "); scanf("%d",&b[i].price);
	      printf("----------------------------------\n");
	}
	//displaying books info
	for(i=0;i<3;i++)
	{
	      printf("Access Number  : %d\n",b[i].accessno);
	      printf("Author Name    : %s\n",b[i].authorname);
	      printf("Title of Book  : %s\n",b[i].title);
	      printf("Year of publish: %d\n",b[i].year);
	      printf("Publisher Name : %s\n",b[i].publishname);
	      printf("Book Price     : %f\n",b[i].price);
	      printf("------------------------\n");
	}
	getch();
}