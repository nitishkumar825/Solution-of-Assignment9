// Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include <stdio.h>

int main() 
{
    int num;
    printf("Enter day number(between 1 - 7) : ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("\nHappy MONDAY morning. Wish you a great week ahead.");
        break;
    case 2:
        printf("\nLots of wishes and blessings for the Tuesday"); 
        break;
    case 3:
        printf("\nHappy Wednesday! Cheer up! there are still two days left until the weekend."); 
        break;
    case 4:
        printf("\nJust another Thursday."); 
        break;
    case 5:
        printf("\nHappy Friday morning");
        break;
    case 6:
        printf("\nSATURDAY! Hurray! It's the start of the weekend.");
        break;
    case 7:
        printf("\nIt's SUNDAY! Wishing you great Relaxing day!");
        break;
    default:
        printf("\nInvalid input.");
        break;
    }
    return 0;
}