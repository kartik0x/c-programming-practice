/* e) main( )
{
int a, b ;
printf ( "Enter values of a and b" ) ;
scanf ( " %d %d ", &a, &b ) ;
printf ( "a = %d b = %d", a, b ) ;
} */
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("a = %d b = %d", a, b);

    return 0;
}