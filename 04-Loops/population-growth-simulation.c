#include<stdio.h>
#include<math.h>
int main()
{   int year;
   double population;

    population = 100000;

    for(year = 1; year <= 10; year++ )
    {
        population = population + population*10/100;
        {
            printf("year %d : %.2f\n", year, population);

        }
    }
    return 0;
    
}