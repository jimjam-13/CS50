#include <stdio.h>

void meow(void); // function prototype

int main(void) {
  int i = 0;

  for (i = 0; i < 3; i++) {
    meow(); // function call
  }
}

void meow(void) { // function definition
  printf("meow\n");
}