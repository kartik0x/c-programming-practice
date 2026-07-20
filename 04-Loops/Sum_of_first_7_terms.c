#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    float x, t, sum = 0;

    printf("Enter the value pf x: ");
    scanf("%f", &x);
    
    t = (x-1)/x;
    
    for(i = 1; i <= 7; i++)
    {
        sum = sum + (pow(t, i) / i);
        

    }
    printf("The Sum of first 7 terms is = %.6f", sum);

    return 0;

}