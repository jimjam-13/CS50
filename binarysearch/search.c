#include <stdio.h>

int main(void) {
  // binary search on a sorted array
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // sorted array
  int n = sizeof(arr) / sizeof(arr[0]); // number of elements in the array
  
  int x;
  printf("Enter a number to search: ");
  scanf("%d", &x);
  
  int left = 0, right = n - 1; // left and right pointers
  while (left <= right) {
    int mid = left + (right - left) / 2;
    printf("left: %d, right: %d, mid: %d\n", left, right, mid);
    if (arr[mid] == x) {
      printf("%d found at index %d\n", x, mid);
      return 0;
    }
    if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  printf("%d not found\n", x);
  return 1;
}

// O{log(n)} time complexity
// O(1) space complexity
// Omega(1) best case time complexity
// Theta(log(n)) average case time complexity
// only works on sorted arrays