#include <stdio.h>

// Returns the greatest common divisor (gcd) of a and b, along with the
// coefficients x and y such that gcd(a, b) = ax + by.
int extended_euclidean_algorithm(int a, int b, int *x, int *y) {
  if (a == 0) {
    *x = 0;
    *y = 1;
    return b;
  }

  int gcd, x1, y1;
  gcd = extended_euclidean_algorithm(b % a, a, &x1, &y1);

  *x = y1 - (b / a) * x1;
  *y = x1;

  return gcd;
}

int main() {
  int a, b, x, y;

  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  int gcd = extended_euclidean_algorithm(a, b, &x, &y);

  printf("The greatest common divisor of %d and %d is %d.\n", a, b, gcd);
  printf("The coefficients x and y such that gcd(a, b) = ax + by are %d and %d.\n",
         x, y);

  return 0;
}
