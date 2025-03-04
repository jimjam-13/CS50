#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char str[50];

  printf("Input:  ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = 0; // Remove newline character from the end of the string
  printf("Output: ");

  // custom uppercase
  for (int i = 0, length = strlen(str); i < length; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      printf("%c", str[i] - ('a' - 'A'));
    }
    else {
      printf("%c", str[i]);
    }
  }
  printf("\n");

  // built-in uppercase from ctype.h
  printf("Output: ");
  for (int i = 0, length = strlen(str); i < length; i++) {
    printf("%c", toupper(str[i]));
  }
  
  printf("\n");
  return 0;
}