/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {


   // Variables declarations 
  int mark1 = 0, mark2 = 0;
  float avg = 0;

  // Asking the two marks from the user
  printf("Enter mark 1: ");
  scanf("%d", &mark1);

  printf("Enter mark 2: ");
  scanf("%d", &mark2);

  // Calculating average of the two marks
  avg  = (mark1 + mark2)/ 2.0;
  
  // Printing average to the user
  printf("\n\nThe average of the two marks is %.2f\n", avg);

  return 0;
}

