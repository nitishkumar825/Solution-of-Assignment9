/*

Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . 
Using the switch statement.

For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

*/

#include <stdio.h>

int main() 
{
    int u;
    float bill;
    printf("Enter your electricity unit: ");
    scanf("%d",&u);
    switch (u>0&&u<=50)
    {
    case 1:
        bill = u*0.5;
        break;
    case 0:
        switch (u>50&&u<=150)
        {
        case 1:
            u-=50;
            bill=25+(u*0.75);
            break;
        case 0:
            switch (u>150&&u<=250)
            {
            case 1:
                u-=150;
                bill = 100+(u*1.2);
                break;
            case 0:
                u-=250;
                bill = 220 +(u*1.5);
                break;
            }
            break;
        }
        break;
    }
    printf("Your electricity bill: %.2f",bill+(bill*0.2));

    return 0;
}