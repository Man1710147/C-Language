#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;
	int sum;
	clrscr();

	printf("enter the value of x :\n");
	scanf("%d",&x);

	printf("enter the value of y :\n");
	scanf("%d",&y);

	sum = (x*x*x) +(3*x*x*y) + (3*x*y*y) + (y*y*y);

	printf
	("sum of this numbar : %d",sum);


	getch();
}