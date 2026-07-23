#include <stdio.h>

int main()
{
    int i, j, num = 1;

    for(i = 1; i <= 4; i++)
    {
        // Spaces print karna
        for(j = 1; j <= 4 - i; j++)
        {
            printf("  ");
        }

        // Numbers print karna
        for(j = 1; j <= i; j++)
        {
            printf("%2d  ", num);
            num++;

            if(num > 10)
                break;
        }

        printf("\n");
    }

    return 0;
}