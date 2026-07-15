/* Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary. */

#include <stdio.h>
#include <math.h>

int main() 
{
    float basic_salary, hra, da, gross_salary;
    
    // user se input lene ke liye 
    
    printf(" Enter Ramesh Basic Salary; ");
    scanf("%f", &basic_salary);

    // calculation ke liye 

    da = 0.40*basic_salary;  //40% of basic salary
    hra = 0.20*basic_salary; // 20% of basic salary

    // gross salary = basic salary + hra + da

    gross_salary = basic_salary + hra + da;

    printf(" Gross salary of Ramesh = %.2f\n", gross_salary);
    return 0;

}

