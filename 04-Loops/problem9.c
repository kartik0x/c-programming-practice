/*print the sum of five digit number*/
#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter the five digit number: ");
    scanf("%d", &num);

    sum = sum + (num % 10);
    num = num / 10;

    sum = sum + (num % 10);
    num = num / 10;

    sum = sum + (num % 10);
    num = num / 10;

    sum = sum + (num % 10);
    num = num / 10;

    sum = sum + (num % 10);

    printf("Sum of digits = %d", sum);

    return 0;
}