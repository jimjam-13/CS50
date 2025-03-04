#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Missing command-line argument\n");
    return 1;
  }

  for (int i = 1; i < argc; i++) {
    printf("Argument %i: %s\n", i, argv[i]);
  }
  return 0;
}

// command-line > echo $? for return value
// command-line > ./status hello world
// command-line > echo $? returns 0
// command-line > ./status
// command-line > echo $? returns 1