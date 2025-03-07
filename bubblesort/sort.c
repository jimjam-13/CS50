#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
  int arr[] = {64, 25, 12, 22, 11, 45, 72, 8, 17, 12}; // unsorted array
  int n = sizeof(arr) / sizeof(arr[0]); // size of array
  int swapped = 0;

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n- i -1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
        swapped = 1;
      }
    }
    if (!swapped) {
      break;
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