#include <stdio.h>

int main()
{
    int i,n;
    printf("enter i:");
    scanf("%d",&i);
    printf("enter n:");
    scanf("%d",&n);    
    while (i <= n)
    {
        if (i%4==0)
        {
            printf("%d ",i);
        }
        
        i++;
    }
} 