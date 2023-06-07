//Antonel
//

#include <stdio.h>

int main()
{
    int startingplace, lastplace;

    scanf("%i", &startingplace);

    scanf("%i", &lastplace);

    if(startingplace <= lastplace)
    {
        printf("%i", lastplace - startingplace);
    }
    else
    {
        printf("%i", startingplace - lastplace);
    }
    return 0;
}
