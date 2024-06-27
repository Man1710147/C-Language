#include<stdio.h>
#include<conio.h>
main()

{
	int bs;
	float hra,da,ta,sum;
	clrscr();

	printf("enter the saleri : ");
	scanf("%d",&bs);

	hra=bs*0.1;
	printf("banifit of: %f\n",hra);

	da=bs*0.05;
	printf("banifit of: %f\n",da);

	ta=bs*0.08;
	printf("banifit of: %f\n",ta);

	sum = bs + hra + da + ta ;
	printf("total :%f\n",sum);

	getch();
}
