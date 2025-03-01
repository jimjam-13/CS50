#include <stdio.h>

int ask_positive_int(void);
void meow(int times);

int main(void) {
  int times = ask_positive_int();
  meow(times);
}

int ask_positive_int(void) {
  int times;

  do {
    printf("No. of pets: ");
    scanf("%i", &times);
  } while (times < 1);  // keep asking if the input is not positive

  return times;  // return the value to the caller
}

void meow(int times) {
  for (int i=0; i<times; i++) {
    printf("meow!\n");
  }
}