#include <stdio.h>

int main(void) {
  int target, numbers[] = {20, 500, 10, 5, 100, 1, 50};

  printf("Enter a number to search: ");
  scanf("%i", &target);

  for (int i = 0, size = sizeof(numbers)/sizeof(numbers[0]); i< size; i++) {
    if(numbers[i] == target) {
      printf("Found %i at index %i\n", numbers[i], i);
      return 0;
    }
  }
  printf("Number not found\n");
  return 1;
}