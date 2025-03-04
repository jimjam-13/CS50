#include <stdio.h>
#include <string.h>

// Function prototype
int length (char s[]);

int main(void) {
  char s[50];

  printf("Enter a string: "); // scanf("%s", s); will cut the string at first space, tab or newline encountered
  fgets(s, sizeof(s), stdin); // fgets() reads a string from the input including spaces, tabs and newlines
  s[strcspn(s, "\n")] = 0; // Remove newline character from the end of the string

  int i = length(s); // string length using custom function
  int length = strlen(s); // string length using built-in function


  printf("Length of string using custom function: %i\n", i);
  printf("Length of string using built-in function: %i\n", length);
  return 0;
}

int length (char s[]) {
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return i;
}