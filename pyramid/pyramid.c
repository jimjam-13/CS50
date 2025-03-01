#include <stdio.h>

void main(void) {
  int n;
  
  // prompt user for height of pyramid
  printf("Height of pyramid: ");
  scanf("%i", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      printf("#");
    }
    printf("\n");
  }
}