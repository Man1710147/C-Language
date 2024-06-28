#include<stdio.h>
main()
{
    float M,E,S,SUM;

    printf("enter a numbar of M:");
    scanf("%f",&M); 

    printf("enter a numbar of E:");
    scanf("%f",&E); 

    printf("enter a numbar of S:");
    scanf("%f",&S); 

    SUM=(M+E+S)/3;

    printf("Average mark:%.2f",SUM);
}