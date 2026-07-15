/*
(b) The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float km, meter, feet, inch, centimeter;

    printf("Distance Berween Two Cites ( In Km); ");
    scanf("%f", &km);

    meter = km*1000;
    feet = meter*3.28084;
    inch = feet*12;
    centimeter = meter*100;

    printf("---Distance Conversation Result ---\n");
    
    printf("Distance in meter = %.2f  m\n", meter);
    printf("Distance in feet = %.2f ft\n", feet);
    printf("Distance in inch = %.2f inch\n", inch);
    printf("Dostance in centimeter = %.2f cm\n", centimeter);

    return 0;

}