// C program to find all roots of a quadratic equation using switch case.

#include <stdio.h>
#include <math.h>

int main() 
{
    int a,b,c;
    printf("Enter value for a: ");
    scanf("%d",&a);
    printf("Enter value for b: ");
    scanf("%d",&b);
    printf("Enter value for c: ");
    scanf("%d",&c);
    int d = b*b - 4*a*c;
    float x,y,x1,x2;
    switch (d>0)
    {
    case 1:
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("\n----- This quadratic equation has real and distinct roots -----\n");
        printf("alpha: %f\n",x1);
        printf("beta: %f\n",x2);
        break;
    case 0:
        switch (d<0)
        {
        case 1:
            d=-d;
            x=-b/(2*(float)a);
            y=sqrt(d)/(2*(float)a);
            printf("\n----- This quadratic equation has complex roots -----\n");
            printf("alpha: %.1f + %.1fi\n",x,y);
            printf("beta: %.1f - %.1fi\n",x,y);
            break;
        case 0:
            x = -b/(2*a);
            printf("\nThis quadratic equation has only one real root which is: %.1f\n",x);
            break;
        }
        break;
    }
    return 0;
}