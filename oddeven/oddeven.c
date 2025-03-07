#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Even\0Odd" + (n&1)*5);
  return 0;
}