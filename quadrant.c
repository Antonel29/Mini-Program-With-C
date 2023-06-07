//Antonel
//Program To Find In Which Quadrant The X And Y Coordinates Are After Determining The Value

#include <stdio.h>

int main()
{
    int a = 4, b, x[4], y[4];
    
    for(b = 0; b < a; b++)
    {
        scanf("%d", &x[b]);
        scanf("%d", &y[b]);
    }
    
    for(b = 0; b < a; b++)
    {
        if(x[b] > 0 && y[b] > 0)
        {
            printf("kuadran 1\n");
        }
        else if(x[b] < 0 && y[b] > 0)
        {
            printf("kuadran 2\n");
        }
        else if(x[b] < 0 && y[b] < 0)
        {
            printf("kuadran 3\n");
        }
        else if(x[b] > 0 && y[b] < 0)
        {
            printf("kuadran 4\n");
        }
        else if(x[b] == 0 || y[b] == 0)
        {
            
        }
    }
    return 0;
}
