/* main( )
{
float a = 5, b = 2 ;
int c ;
c = a % b ;
printf ( "%d", c ) ;
} */

#include <stdio.h>
#include <math.h>

int main()
{
    float a = 5, b = 2;

    printf("%f", fmod(a, b));

    return 0;
}