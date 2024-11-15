#include <stdio.h>

// Function to find the GCD using the Euclidean Algorithm
int euclidean_gcd(int a, int b) {
  int iterations = 1;  // Variable to count iterations

  while (b != 0) {
    printf("Iteration %d: GCD(%d, %d)\n", iterations, a, b);
    
    int temp = b;
    b = a % b;
    a = temp;

    iterations++;
  }

  return a;
}

// Main function
int main() {
  // Declare variables
  int num1, num2, gcd;
  char answer;

  // Get the input for the numbers
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  // Calculate and display the GCD
  gcd = euclidean_gcd(num1, num2);
  printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

  // Ask the user if they want to calculate another GCD
  do {
    printf("Do you want to calculate another GCD? (y/n) ");
    scanf(" %c", &answer);

    if (answer == 'y') {
      // Get the input for the numbers again
      printf("Enter two numbers: ");
      scanf("%d %d", &num1, &num2);

      // Calculate and display the GCD
      gcd = euclidean_gcd(num1, num2);
      printf("The GCD of %d and %d is %d\n", num1, num2, gcd);
    }
  } while (answer == 'y');

  return 0;
}
