/*
4. Write a menu driven program with the following options:

a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/

#include <stdio.h>

int main() 
{
    int input,exit=1,a,b,c;
    while (exit!=0)
    {
        printf("-----Choose from below options-----\n");
        printf(" 1. Check if given set of three numbers are lengths of an Isosceles triangle\n");
        printf(" 2. Check if given set of three numbers are lengths of a Right angle triangle\n");
        printf(" 3. Check if given set of three numbers are lengths of an Equilatera triangle\n");
        printf(" 4. Exit\nYour option : ");

        scanf("%d",&input);
        switch (input)
        {
        case 1:
            printf("\nEnter all three sides of the triangle : ");
            scanf("%d%d%d",&a,&b,&c);
            switch (a==b||b==c||a==c)
            {
            case 1:
                printf("\nYes! This is an Isosceles triangle\n\n");
                break;
            case 0:
                printf("\nNo! It's not an Isosceles triangle\n\n");
                break;
            }
            break;
        case 2:
            printf("\nEnter all three sides of the triangle : ");
            scanf("%d%d%d",&a,&b,&c);
            switch ((a*a+(b*b))==c*c)
            {
            case 1:
                printf("\nYes! This is a Right angle triangle\n\n");
                break;
            case 0:
                printf("\nNo! It's not a Right angle triangle\n\n");
                break;
            }
            break;
        case 3:
            printf("\nEnter all three sides of the triangle : ");
            scanf("%d%d%d",&a,&b,&c);
            switch (a==b&&b==c&&a==c)
            {
            case 1:
                printf("\nYes! This is an Equilateral triangle\n\n");
                break;
            case 0:
                printf("\nNo! It's not an Equilateral triangle\n\n");
                break;
            }
            break;
        case 4:
            exit=0;
            printf("\nYou choose to exit\n");
            break;
        
        default:
            printf("\nInvalid input\n");
            break;
        }
    }
    
    return 0;
}