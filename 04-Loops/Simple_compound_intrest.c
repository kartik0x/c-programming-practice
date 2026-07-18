#include <stdio.h>
#include<math.h>
int main ()

{
    double p, r, n, q, a;
    int i;
    for( i = 1; i <= 10; i++ )
    {
        printf(" Enter Principal (P), Rate(R, Time(N), Compounds Per Year (Q); ");
        scanf("%lf %lf %lf %lf", &p, &r, &n, &q);
       a = p * pow((1 + (r / 100) / q), (n * q));
        printf("Amount = %.2f\n\n", a);

    }
    return 0;
}