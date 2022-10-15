// Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    switch (n>0)
    {
    case 1:
        n=n-(2*n);
        break;
    case 0:
        n=n+(-2*n);
        break;
    }

    printf("Result: %d",n);

    return 0;
}