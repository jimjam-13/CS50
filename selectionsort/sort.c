#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
  int arr[] = {64, 25, 12, 22, 11, 45, 72, 8, 17, 12}; // unsorted array
  int n = sizeof(arr) / sizeof(arr[0]); // size of array

  for (int i = 0; i < n; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    if (min != i) {
      swap(&arr[min], &arr[i]);
    }
  }

  printf("Sorted array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}