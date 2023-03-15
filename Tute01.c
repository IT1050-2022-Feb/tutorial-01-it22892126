/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  double sub1,sub2,total,average;
   
   printf("enter the subject 1 marks: ");
   scanf("%lf",&sub1);
   
   printf("enter the subject 2 marks: ");
   scanf("%lf",&sub2);
   
   total = sub1+sub2;
   average = total/2;
   
   printf("Average = %lf ",average);
  
  return 0;
}

