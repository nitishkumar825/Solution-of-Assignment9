// Program to Convert even number into its upper nearest odd number Switch Statement.

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch (n%2==0)
    {
    case 1:
        printf("Result: %d",n+1);
        break;
    case 0:
        printf("Result: %d",n);
        break;
    }
    return 0;
}