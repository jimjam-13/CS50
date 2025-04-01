#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} node;

int main (void) {
  node *list = NULL;

  printf("No. of elements in the list: ");
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) { // FIFO list
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL) {
      printf("Memory allocation failed");
      // free any previously allocated nodes
      for (node *ptr = list; ptr != NULL; ) {
        node *temp = ptr;
        ptr = ptr->next;
        free(temp);
      }
      return 1;
    }

    printf("Enter number: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;

    if (list == NULL) { // If the list is empty
      list = new_node;
    } else { // If the list is not empty
      for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
        // Traverse to the end of the list
        if (ptr->next == NULL) {
          ptr->next = new_node;
          break;
        }
      }
    }

  }

  // Print the list

  printf("The list is: ");
  for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
    printf("%d ", ptr->data);
  }
  printf("\n");
  
  // Free the list
  
  for (node *ptr = list; ptr != NULL; ) {
    node *temp = ptr;
    ptr = ptr->next;
    free(temp);
  }

  list = NULL;
  printf("The list has been freed.\n");

  return 0;
}