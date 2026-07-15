/*
Write a program to receive Cartesian coordinates (x, y)
of a point and convert them into polar coordinates (r, phi).
Formula:
r = sqrt(x*x + y*y)
phi = atan2(y, x)
*/

#include <stdio.h>
#include <math.h>
int main () 
{
    float x, y, r, phi;
    printf(" Enter Cordinates of x: ");
    scanf("%f", &x);

printf("Enter cordinates of y: ");
scanf("%f", &y);

 r = sqrt(x*x + y*y); 
 phi = atan2(y, x);


 printf("Cordinates of r =  %.2f\n", r);

 printf("Cordinates of ɸ is: %.2f\n", phi);

 return 0;

}
