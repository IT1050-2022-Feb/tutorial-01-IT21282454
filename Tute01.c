/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{ 
  float mark1, mark2;
  float sum, average;

  printf("Enter Mark 1: ");
  scanf("%f", &mark1);

  printf("Enter Mark 2: ");
  scanf("%f", &mark2);

  sum = mark1 + mark2;

  average = sum / 2.0;

  printf("\nAverage = %.2f", average);
  
  return 0;
}

