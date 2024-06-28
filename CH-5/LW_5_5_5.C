#include<stdio.h>
#include<conio.h>

main()
{
	int a=10,b=20;
	clrscr();

	printf("value of a is : %d\n",a);
	printf("value of b is : %d\n",b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("after swaping valur\n");
	printf("value of a is : %d\n",a);
	printf("value of b is : %d\n",b);


	getch();
}