/*
rever of a number 
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, d5, d4, d3, d2, d1;
    int long revnum;
    
    printf("\nEnter the value reverse of a number: ");
    scanf("%d", &n);

    d5 = n % 10;
    n = n/10;
    d4 = n % 10;
    n = n/10;
    d3 = n % 10 ;
    n = n/10;
    d2 = n % 10;
    n = n/10;
    d1 = n % 10;
revnum = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
/* speceifier %ld used for long integer */
printf( " the reversed number is %ld\n", revnum);
return 0;

    
}