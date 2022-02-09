/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

int main() {
  
  // Variable declarations
  int n = 0, i = 0, sum = 0;

  // Asking input n
  printf("Enter number to calculate sum: ");
  scanf("%d", &n);

  // Using for loop to calculate sum from 1 to n
  for (i = 1; i <=n ; i++)
  {
      sum += i;
  }

  // Displaying the sum from 1 to n to the user
  printf("The sum from 1 to %d is %d\n", n, sum );
  
  return 0;
}

