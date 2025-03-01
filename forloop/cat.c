#include <stdio.h>

void meow(int n); // function prototype

int main(void) {
  meow(3); // function call
}

void meow(int n) { // function definition
  for (int i = 0; i < n; i++) {
    printf("meow\n");
  }
}