#include<stdio.h>
#include<conio.h>

main()
{
	int a=10,b=20,c;
	clrscr();

	printf("value of a is : %d\n",a);
	printf("value of b is : %d\n",b);

	c=a;
	a=b;
	b=c;

	printf("after swaping valur\n");
	printf("value of a is : %d\n",a);
	printf("value of b is : %d\n",b);


	getch();
}