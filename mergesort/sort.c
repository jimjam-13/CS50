#include <stdio.h>
#include <stdlib.h>

// function prototypes
void mergeSort(int arr[], int left, int right);
void merge(int arr[], int left, int middle, int right);

int main(void) {
  int arr[] = {64, 25, 12, 22, 11, 45, 72, 8, 17, 12}; // unsorted array
  int n = sizeof(arr) / sizeof(arr[0]); // size of array

  mergeSort(arr, 0, n - 1);

  printf("Sorted array: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}

void mergeSort(int arr[], int left, int right) {
  //debug print
  // printf("left: %d, right: %d\n", left, right);
  // printf("arr: ");
  // for (int i = 0; i < 10; i++) {
  //   printf("%d ", arr[i]);
  // }
  // printf("\n");

  if (left < right) {
    int middle = left + (right - left) / 2;

    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);

    merge(arr, left, middle, right);
  }
}

void merge(int arr[], int left, int middle, int right) {
  int i, j, k;
  int size_l = middle - left + 1; // size of left sub-array
  int size_r = right - middle; // size of right sub-array

  // creating temporary sub-arrays of respective sizes
  int *arr_l = malloc(size_l * sizeof(int)); // left sub-array
  int *arr_r = malloc(size_r * sizeof(int)); // right sub-array

  // copying data from main array to left sub-array and right sub-array
  for (i = 0; i < size_l; i++) {
    arr_l[i] = arr[i + left];
  }
  for (j = 0; j < size_r; j++) {
    arr_r[j] = arr[j + middle + 1];
  }

  // merging left and right sub-arrays after comparison
  i = 0; j = 0; k = left;
  while (i < size_l && j < size_r) {
    if (arr_l[i] <= arr_r[j]) { // if element of left sub-array is smaller, put it in main array
      arr[k] = arr_l[i];
      i++;
    } else { // if element of right sub-array is smaller, put it in main array
      arr[k] = arr_r[j];
      j++;
    }
    k++;
  }

  while (i < size_l) { // if elements in left array remain, add them to main array
    arr[k] = arr_l[i];
    i++;
    k++;
  }

  while (j < size_r) { // if elements in right array remain, add them to main array
    arr[k] = arr_r[j];
    j++;
    k++;
  }

  free(arr_l);
  free(arr_r);
}