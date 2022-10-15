/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include <stdio.h>

int main()
{
    int input;
    int a, b, quit = 1;
    while (quit != 0)
    {
        printf("\n----- Choose your option for below operation -----\n");
        printf("\n 1. Addition\n");
        printf(" 2. Subtraction\n");
        printf(" 3. Multiplication\n");
        printf(" 4. Division\n");
        printf(" 5. Exit\n");
        printf("Your choice : ");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("\nEnter two numbers : ");
            scanf("%d%d", &a, &b);
            printf("\nThe Addition of %d and %d = %d", a, b, a + b);
            break;
        case 2:
            printf("\nEnter two numbers : ");
            scanf("%d%d", &a, &b);
            printf("\nThe Subtraction of %d and %d = %d", a, b, a - b);
            break;
        case 3:
            printf("\nEnter two numbers : ");
            scanf("%d%d", &a, &b);
            printf("\nThe Multiplication of %d and %d = %d", a, b, a * b);
            break;
        case 4:
            printf("\nEnter dividend : ");
            scanf("%d", &a);
            printf("Enter divisor : ");
            scanf("%d", &b);
            printf("\nThe Division of %d and %d = %.2f", a, b, (float)a / b);
            break;
        case 5:
            quit = 0;
            printf("\nYou choose to exit");
            break;

        default:
            printf("\nInvalid input");
            break;
        }
    }
    return 0;
}