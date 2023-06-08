#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    system("cls");

    int firstcondition;

    scanf("%i", &firstcondition);

    if(firstcondition == 0)
    {
        system("cls");

        //Triangle Area

        float base, height;

        printf("Enter the length of the base : ");
        scanf("%f", &base);

        printf("Enter height                 : ");
        scanf("%f", &height);

        printf("\nA = b x h x 0.5");
        printf("\n  = %.0f x %.0f x 0.5", base, height);
        printf("\n  = %.1f%c", (((int) base * (int) height) * 0.5), 253);
    }
    else if(firstcondition == 1)
    {
        system("cls");

        //Square Area

        float side;

        printf("Enter the side length : ");
        scanf("%f", &side);

        printf("\nA = s x s");
        printf("\n  = %.0f x %.0f", side, side);
        printf("\n  = %i%c", ((int) side * (int) side), 253);
    }
    else if(firstcondition == 2)
    {
        system("cls");

        //Rectangle Area

        float length, width;

        printf("Enter length : ");
        scanf("%f", &length);

        printf("Enter Width  : ");
        scanf("%f", &width);

        printf("\nA = l x w");
        printf("\n  = %.0f x %.0f", length, width);
        printf("\n  = %i%c", ((int) length * (int) width), 253);
    }
    else if(firstcondition == 3)
    {
        system("cls");

        //Circle Area

        float radius;

        printf("Masukkan Radius : ");
        scanf("%f", &radius);

        printf("\nA = 3.14 x r%c", 253);
        printf("\n  = 3.14 x %.0f%c", radius, 253);
        printf("\n  = %.1f%c", (radius * radius) * 3.14, 253);
    }
    else if(firstcondition == 4)
    {
        system("cls");

        //
    }
}
