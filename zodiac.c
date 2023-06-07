//Antonel
//Program To Determine The Zodiac

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    int day;
    char month[9];
    
    printf("Welcome To The Program Determines The Zodiac According To Date Of Birth\n\n");
    
    system("PAUSE");
    system("cls");
    
    printf("Enter Your Date And Month Of Birth\n\n");
    printf("Example : 1 Januari\n\n");
    
    scanf("%i", &day);
    scanf("%s", &month);
    
    if(strcmp(month, "Januari") == 0)
    {
        if(day >= 1 && day <= 19)
        {
            printf("\nZodiak Capricorn\n\n");
        }
        else if(day >= 20 && day <= 31)
        {
            printf("\nZodiak Aquarius\n\n");
        }
    }
    else if(strcmp(month, "Februari") == 0)
    {
        if(day >= 1 && day <= 18)
        {
            printf("\nZodiak Aquarius\n\n");
        }
        else if(day >= 19 && day <= 28)
        {
            printf("\nZodiak Pisces\n\n");
        }
    }
    else if(strcmp(month, "Maret") == 0)
    {
        if(day >= 1 && day <= 20)
        {
            printf("\nZodiak Pisces\n\n");
        }
        else if(day >= 21 && day <= 31)
        {
            printf("\nZodiak Aries\n\n");
        }
    }
    else if(strcmp(month, "April") == 0)
    {
        if(day >= 1 && day <= 20)
        {
            printf("\nZodiak Aries\n\n");
        }
        else if(day >= 21 && day <= 30)
        {
            printf("\nZodiak Taurus\n\n");
        }
    }
    else if(strcmp(month, "Mei") == 0)
    {
        if(day >= 1 && day <= 20)
        {
            printf("\nZodiak Taurus\n\n");
        }
        else if(day >= 21 && day <= 31)
        {
            printf("\nZodiak Gemini\n\n");
        }
    }
    else if(strcmp(month, "Juni") == 0)
    {
        if(day >= 1 && day <= 20)
        {
            printf("\nZodiak Gemini\n\n");
        }
        else if(day >= 21 && day <= 30)
        {
            printf("\nZodiak Cancer\n\n");
        }
    }
    else if(strcmp(month, "Juli") == 0)
    {
        if(day >= 1 && day <= 20)
        {
            printf("\nZodiak Cancer\n\n");
        }
        else if(day >= 21 && day <= 31)
        {
            printf("\nZodiak Leo\n\n");
        }
    }
    else if(strcmp(month, "Agustus") == 0)
    {
        if(day >= 1 && day <= 21)
        {
            printf("\nZodiak Leo\n\n");
        }
        else if(day >= 22 && day <= 31)
        {
            printf("\nZodiak Virgo\n\n");
        }
    }
    else if(strcmp(month, "September") == 0)
    {
        if(day >= 1 && day <= 22)
        {
            printf("\nZodiak Virgo\n\n");
        }
        else if(day >= 23 && day <= 30)
        {
            printf("\nZodiak Libra\n\n");
        }
    }
    else if(strcmp(month, "Oktober") == 0)
    {
        if(day >= 1 && day <= 22)
        {
            printf("\nZodiak Libra\n\n");
        }
        else if(day >= 23 && day <= 31)
        {
            printf("\nZodiak Scorpio\n\n");
        }
    }
    else if(strcmp(month, "November") == 0)
    {
        if(day >= 1 && day <= 22)
        {
            printf("\nZodiak Scorpio\n\n");
        }
        else if(day >= 23 && day <= 30)
        {
            printf("\nZodiak Sagitarius\n\n");
        }
    }
    else if(strcmp(month, "Desember") == 0)
    {
        if(day >= 1 && day <= 20)
        {
            printf("\nZodiak Sagitarius\n\n");
        }
        else if(day >= 21 && day <= 31)
        {
            printf("\nZodiak Capricorn\n\n");
        }
    }
    return 0;
}
