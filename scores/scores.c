#include <stdio.h>

// constants
// const int N = 3;
#define N 3

// function prototypes
float get_average(int n, int scores[]);

int main() {
  
  int scores[N];
  
  // get scores from user
  for (int i = 0; i < N; i++) {
    printf("Score %i: ", i + 1);
    scanf("%i", &scores[i]);
  }

  printf("Average: %f\n", get_average(N, scores));
}

float get_average(int  n, int scores[]) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += scores[i];
  }
  return sum / (float)n;
}