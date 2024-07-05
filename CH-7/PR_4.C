#include <stdio.h>
int main()
{
    int a;
    char z;

    printf("Enter Your Mark=");
    scanf("%d", &a);

    (a >= 81 &&a <= 100)
        ? z = 'A'
        : (a >= 71 &&a <= 80)
            ? z = 'B'
            : (a >= 51 &&a <= 70)
                ? z = 'C'
                : (a >= 41 &&a <= 50)
                    ? z = 'D'
                    : (a >= 33 &&a <= 40)
                        ? z = 'E'
                        : (a >= 0 &&a <= 32)
                            ? z = 'F'
                            : printf("invalid mark");
                            printf("Your Grade ia %c.",z);
                           
switch (z)
{
    case 'A' :
        printf("Excellent work!");
        break;
    case 'B' :
        printf("Well done.");
        break;
    case 'C' :
        printf("Good job.");
        break;
    case 'D' :
        printf("You passed,");
        break;
    case 'E' :
        printf("You passed,");
        break;
    case 'F' :
        printf("Sorry, you failed.");
        break;
      
    default:
        printf("invalid marks");
        break;
}

if (z=='F')
{
    printf("You are not eligible for the next level");
}
else
{
    printf("You are eligible for the next level");
}
}