#include <stdio.h>

int main()
{
    int a, b, c, d;
    int sum1, sum2;
    int limit = 20;   // Change this value as needed

    for (a = 1; a <= limit; a++)
    {
        for (b = a + 1; b <= limit; b++)
        {
            sum1 = a * a * a + b * b * b;

            for (c = a + 1; c <= limit; c++)
            {
                for (d = c + 1; d <= limit; d++)
                {
                    sum2 = c * c * c + d * d * d;

                    if (sum1 == sum2)
                    {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}