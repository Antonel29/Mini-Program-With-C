//Antonel
//Program To Determine A Letter Is A Vowel Or Consonant

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    char huruf[1000];
    int jumlah, i;
    
    printf("Masukkam Jumlah Huruf : ");
    scanf("%i", &jumlah);
    
    fflush(stdin);
    
    puts("");
    
    for(i = 1; i <= jumlah; i++)
    {
        printf("Huruf Ke - %i : ", i);
        
        huruf[i] = getchar();
        
        fflush(stdin);
    }
    
    puts("");
    
    for(i = 1; i <= jumlah; i++)
    {
        switch(huruf[i])
        {
            case 65  : puts("Vokal"); break;
            case 97  : puts("Vokal"); break;
            case 69  : puts("Vokal"); break;
            case 101 : puts("Vokal"); break;
            case 73  : puts("Vokal"); break;
            case 105 : puts("Vokal"); break;
            case 79  : puts("Vokal"); break;
            case 111 : puts("Vokal"); break;
            case 85  : puts("Vokal"); break;
            case 117 : puts("Vokal"); break;
            default  : puts("Konsonan");
        }
        fflush(stdin);
    }
    return 0;
}
