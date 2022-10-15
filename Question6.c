// Program to check whether a year is a leap year or not. Using switch statement...

#include <stdio.h>

int main() 
{
    int year;
    printf("Enter year to check if it's Leap year or not : ");
    scanf("%d",&year);
    switch (year%4==0)
    {
    case 1:
        switch (year%100==0)
        {
        case 1:
            switch (year%400==0)
            {
            case 1:
                printf("Leap Year");
                break;
            case 0:
                printf("Common Year");
                break;
            }
            break;
        case 0:
            printf("Leap Year");
            break;
        }
        break;
    case 0:
        printf("Common Year");
        break;
    }
    return 0;
}