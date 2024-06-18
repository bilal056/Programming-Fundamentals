#include <stdio.h>

/* 
Description:
This program calculates the value of s using the formula s = val^x / x!, 
where val is initialized to 1 and is raised to the power of x, and x! (factorial of x) is calculated.
It takes two inputs x and n from the user, and calculates s using functions fact and fact1.
*/

// Function to calculate the factorial of a number
int fact(int x, int n) {
  int val = 1;
  for (int i = 1; i <= n; i++) {
    val = val * x;
  }
  return val;
}

// Function to calculate factorial
int fact1(int k, int y) {
  int i, factorial = 1;
  for (i = 1; i <= k; ++i) {
    factorial = factorial * i;
  }
  return factorial;
}

int main() {
  int x, n, s, val = 1;

  // Input number of x
  printf("Enter number of x : ");
  scanf("%d", &x);

  // Input number of n
  printf("Enter number of n : ");
  scanf("%d", &n);

  // Calculate s
  for (int k = 0; k <= n; k++) {
    s = fact(val, x) / fact1(x, n);
  }

  // Output the result
  printf("%d", s);

  return 0;
}


