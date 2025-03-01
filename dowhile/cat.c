#include <stdio.h>

void meow(int times);

int main(void) {
  int times;
  
  do {
    printf("No. of pets: ");
    scanf("%i", &times);
  } while (times < 1);
  
  meow(times);
}

void meow(int times) {
  for (int i=0; i<times; i++) {
    printf("meow!\n");
  }
}