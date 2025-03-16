#include <stdio.h>

int fact(int n);

int main() {
  int number;

  do {
    printf("Enter a number: ");
    scanf("%d", &number);
  } while (number < 0);

  int factorial = fact(number);

  printf("Factorial of %d = %d\n", number, factorial);
  return 0;
}

int fact(int n) {
  if (n >= 1)
    return n * fact(n - 1);
  else
    return 1;
}