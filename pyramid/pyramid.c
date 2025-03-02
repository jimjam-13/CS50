#include <stdio.h>

void make_pyramid(int n);

void main(void) {
  int n;
  
  // prompt user for height of pyramid
  printf("Height of pyramid: ");
  scanf("%i", &n);

  make_pyramid(n);
}

void make_pyramid(int n) {
  for (int i = 0; i < n; i++) {
    for (int k = n-1; k > i; k--) {
      printf(" ");
    }
    for (int j = 0; j <= i; j++) {
      printf("#");
    }
    printf("\n");
  }
}