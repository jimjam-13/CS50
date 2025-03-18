#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  char s[10], *t;

  printf("Enter a string: ");
  fgets(s, sizeof(s), stdin);
  //s[strcspn(s, "\n")] = 0;

  t = malloc(strlen(s) + 1);
  if (t == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }
  
  strcpy(t, s);

  if (strlen(t) > 0) {
    t[0] = toupper(t[0]);
  }

  printf("s: %s\n", s);
  printf("t: %s\n", t);

  free(t);

  return 0;
}