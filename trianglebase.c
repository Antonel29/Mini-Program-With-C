#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    system("cls");
    
    int condition;
    
    scanf("%i", &condition);
    
    if(condition == 0)
    {
        system("cls");
        
        //Triangle Area
        
        int base;
        int height;
        
        printf("Masukkan Alas   : ");
        scanf("%i", &base);
        
        printf("\nMasukkan Tinggi : ");
        scanf("%i", &height);
        
        printf("\nA = a x h x 0.5");
        printf("\n  = %i x %i x 0.5", base, height);
        printf("\n  = %.1f", (base * height) * 0.5);
    }
    else if(condition == 1)
    {
        system("cls");
        
        //Square Area
        
        int side;
        
        printf("Masukkan Panjang Sisi : ");
        scanf("%i", &side);
        
        printf("\nA = s x s");
        printf("\n  = %i x %i", side, side);
        printf("\n  = %i%c", (side * side), 253);
    }
    else if (condition == 2)
    {
        system("cls");
        
        //Rectangle Area
        
        int length;
        int width;
        
        printf("Masukkan Panjang : ");
        scanf("%i", &length);
        
        printf("\nMasukkan Lebar   : ");
        scanf("%i", &width);
        
        printf("\nA = l x w");
        printf("\n  = %i x %i", length, width);
        printf("\n  = %i\n", (length * width));
    }
    else if(condition == 3)
    {
        system("cls");
        
        //Circle Area
        
        int radius;
        
        printf("Masukkan Radius : ");
        scanf("%i", &radius);
        
        printf("\nA = 3.14 x r%c", 253);
        printf("\n  = 3.14 x %i%c", radius, 253);
        printf("\n  = %.1f", 3.14 * (radius * radius));
    }
    else if(condition == 4)
    {
        system("cls");
        
        //Kite & Rhombus Area
        
        int firstdimension;
        int seconddimension;
        
        printf("Masukkan Panjang Diagonal Pertama : ");
        scanf("%i", &firstdimension);
        
        printf("\nMasukkan Panjang Diagonal Kedua   : ");
        scanf("%i", &seconddimension);
        
        printf("\nA = d1 x d2 x 0.5");
        printf("\n  = %i x %i x 0.5", firstdimension, seconddimension);
        printf("\n  = %.1f", (firstdimension * seconddimension) * 0.5);
    }
    else if(condition == 5)
    {
        system("cls");
        
        //Trapezoid Area
        
        int con;
        
        scanf("%i", &con);
        
        if(con == 0)
        {
            system("cls");
            
            int firstbase;
            int secondbase;
            int height;
            
            printf("Masukkan Panjang Alas Pertama : ");
            scanf("%i", &firstbase);
            
            printf("\nMasukkan Panjang Alas Kedua   : ");
            scanf("%i", &secondbase);
            
            printf("\nMasukkan Tinggi               : ");
            scanf("%i", &height);
            
            printf("\nA = 0.5(base 1 + base 2)h");
            printf("\n  = 0.5(%i + %i)%i", firstbase, secondbase, height);
            printf("\n  = %.1f", 0.5 * (firstbase + secondbase) * height);
        }
    }
    else if(condition == 6)
    {
        system("cls");
        
        //Parallelogram Area
        
        int base;
        int height;
        
        printf("Masukkan Panjang Base : ");
        scanf("%i", &base);
        
        printf("\nMasukkan Tinggi       : ");
        scanf("%i", &height);
        
        printf("\nA = b x h");
        printf("\n  = %i x %i", base, height);
        printf("\n  = %i", base * height);
    }
    else if(condition == 7)
    {
        system("cls");
        
        //Pentagon Area
        
        int condition;
        
        scanf("%i", &condition);
        
        if(condition == 0)
        {
            
            //If The Long Side And Apothem Are Known
            
            system("cls");
            
            int area;
            int side;
            int apothem;
            
            printf("Masukkan Panjang Sisi    : ");
            scanf("%i", &side);
            
            printf("\nMasukkan Panjang Apothem : ");
            scanf("%i", &apothem);
            
            area = 0.5 * (side * apothem);
            
            printf("\nA = 0.5 x s x h");
            printf("\n  = 0.5 x %i x %i", side, apothem);
            printf("\n  = %i", area * 5);
        }
        else if(condition == 1)
        {
            
            //If Only The Known Side
            
            system("cls");
            
            float adjacent;
            float opposite;
            int side;
            
            printf("Masukkan Panjang Sisi : ");
            
            scanf("%i", &side);
            
            opposite = (float) side / 2.00;
            adjacent = opposite / 0.727;
            
            printf("\nA = opposite / tan(36) x adjacent x 0.5 x 10");
            printf("\n  = (%.1f) / tan(36) x (%.1f) x 0.5 x 10", opposite, adjacent);
            printf("\n  = %.1f",(opposite * adjacent * 0.50 * 10.00));
        }
        else if(condition == 2)
        {
            
            //If The Perimeter And Apothem Are Known
            
            float perimeter;
            float apothem;
            
            printf("Masukkan Perimeter  : ");
            scanf("%f", &perimeter);
            
            printf("\nMasukkka Apothem : ");
            scanf("%f", &apothem);
            
            printf("\nA = P x a / 2");
            printf("\n  = %.0f x %.0f / 2", perimeter, apothem);
            printf("\n  = %.1f", (perimeter * apothem) / 2.00);
        }
        else if(condition == 3)
        {
            //If Only Circumference Of The Circle Is Known
            
            float radius;
            
            printf("Masukkan Radius : ");
            scanf("%f", &radius);
            
            printf("\n A = 5 / 2 x r%c x sin(72)", 253);
            printf("\n   = 5 / 2 x %.0f%c x sin(72)", radius, 253);
            printf("\n   = %.1f", ((5.0 / 2.0) * (radius * radius)) * 0.951);
        }
    }
}
