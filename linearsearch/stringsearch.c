#include <stdio.h>
#include <string.h>

int main(void) {
  char target[15], *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

  // size of string array is no. of strings * size of a pointer(8 bytes)

  printf("Enter a string to search: ");
  fgets(target, sizeof(target), stdin);
  target[strcspn(target, "\n")] = 0;

  for (int i = 0, size = sizeof(strings)/sizeof(strings[0]); i< size; i++) {
    if(strcmp(strings[i], target) == 0) {
      printf("Found %s at index %i\n", strings[i], i);
      return 0;
    }
  }
  printf("String not found\n");
  return 1;
}