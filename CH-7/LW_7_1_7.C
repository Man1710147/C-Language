#include <stdio.h>

int main()
{
    int choice, A1;

    printf("Enter 1 For English\n");
    printf("Enter 2 For Hindi\n");
    printf("Enter 3 For Gujarati\n");
    printf("Enter Your Choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter 1 For Internet Recharge\n");
        printf("Enter 2 For Top-up Recharge\n");
        printf("Enter 3 For Special Recharge\n");
        printf("Enter Your Choice :");
        scanf("%d", &A1);
        switch (A1)
        {
        case 1:
            printf("You have successfully done a Internet Recharge");
            break;
        case 2:
            printf("You have successfully done a Top-up Recharge");
            break;
        case 3:
            printf("You have successfully done a Special Recharge");
            break;
        default:
            printf("invalid choice...");
        }
        break;

    case 2:
        printf("Internet Recharge ke liye 1 dabaiye\n");
        printf("Top-up Recharge ke liye 2 dabaiye\n");
        printf("Special Recharge ke liye 3 dabaiye\n");
        printf("Enter Your Choice :");
        scanf("%d", &A1);
        switch (A1)
        {
        case 1:
            printf("Aapne safaltapurvak Internet Recharge kar liya he.");
            break;
        case 2:
            printf("Aapne safaltapurvak Top Up Recharge kar liya he.");
            break;
        case 3:
            printf("Aapne safaltapurvak Special Recharge kar liya he.");
            break;
        default:
            printf("invalid choice...");
        }
        break;

    case 3:
        printf("Internet Recharge mate 1 dabavo\n");
        printf("Top-up Recharge mate 2 dabavo\n");
        printf("Special Recharge mate 3 dabavo\n");
        printf("Enter Your Choice :");
        scanf("%d", &A1);
        switch (A1)
        {
        case 1:
            printf("Tame safaltapurvak Internet Recharge karyu chhe.");
            break;
        case 2:
            printf("Tame safaltapurvak Top Up Recharge karyu chhe.");
            break;
        case 3:
            printf("Tame safaltapurvak Special Recharge karyu chhe.");
            break;
        default:
            printf("invalid choice...");
        }
        break;

    default:
        printf("invalid choice...");
    }
}