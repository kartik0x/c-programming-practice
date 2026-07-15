/*
(d) Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees.
*/
#include <stdio.h>
int main()
{
  float temperature;

  printf(" Enter the temperature value ( in fehrenheit): ");
  scanf("%f", &temperature);

  // Formula for convert ferenheit to centigrade

  float temp_in_fahrenheit, temp_in_centigrade;
  temp_in_centigrade = (temperature - 32 ) *5.0 / 9.0 ;

// Result Jo screen per print hoga 

printf(" \n --- Tempreture in centigrade --- \n" );
printf("Tempreture in centigrade = %.2f\n", temp_in_centigrade);
return 0;
}