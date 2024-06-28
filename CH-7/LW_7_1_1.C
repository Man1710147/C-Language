#include<stdio.h>
int main()
{
    int a;

    printf("enter a numbar:");
    scanf("%d",&a); 

    if(a > 0){
        printf("This number is Positive");
    }
    else if (a < 0)
    {
        printf("This number is Negative");
    }
    else
    {
        printf("This number is Neutral");
    }
    
}