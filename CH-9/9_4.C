#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter n:");
    scanf("%d", &n);
    while (n >= i)
    {
        if (n % 2 != 0)
        {
            printf("%d ", n);

        }
        n--;
    }
}