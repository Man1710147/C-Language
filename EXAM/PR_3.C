#include<stdio.h>
#include<conio.h>
main()

{
	float a,b,c,sum = 180.0;
	clrscr();

	printf("enter the first angal :\n ");
	scanf("%f",&a);

	printf("enter the secand angal :\n ");
	scanf("%f",&b);

	c = sum -(a + b);
	printf("tierd angal : %.1f",c);


	getch();
}
