#include<stdio.h>
int main()
{
    int a,b;

    printf("enter A:");
    scanf("%d",&a); 

    printf("enter B:");
    scanf("%d",&b); 

    if(a < b){
        printf("A is min");
    }
    else if (a > b)
    {
        printf("B is min");
    }
    else
    {
        printf("botha are same");
    }
    
}