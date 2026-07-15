/*
(c) If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.
*/

#include <stdio.h>
int main () 
{
    float physics, chemestry, maths, hindi, english;
    // user se input lena hai 
    printf("Marks Obtained in physics: ");
    scanf("%f", &physics);
    printf("Marks Obtained in chemestry: ");
    scanf("%f", &chemestry);
    printf("Marks Obtained in maths: ");
    scanf("%f", &maths);
    printf("Marks Obtained in hindi: ");
    scanf("%f", &hindi);
    printf("Marks Obtained in english: ");
    scanf("%f", &english);
    
    // calculation part 
// 1. Total (Aggregate) Marks nikalna

   float aggregate_marks, percentage;
   aggregate_marks = physics + chemestry + maths + hindi + english;

   // 2. Percentage nikalna

   percentage = (aggregate_marks / 500.0 ) * 100;

   // Result ko screen par print karna

   printf("\n--- Kartik Result Summary ---\n");
   printf("Aggregate Marks obtained = %.2f / 500.00\n", aggregate_marks );
   printf(" percentage Obtained.    = %.2f%%\n", percentage);

   return 0;


}