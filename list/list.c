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

  for (int i = 0; i < n; i++) { // this linked list is created in reverse order therefore it is LIFO --STACK--
    
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

    new_node->next = list;
    list = new_node;
  }

  // Print the list

  printf("The list is: ");
  node *ptr = list;
  while (ptr != NULL) {
    printf("%d", ptr->data);
    ptr = ptr->next;
  }

  printf("\n");
  
  // Free the list
  
  ptr = list;
  while (ptr != NULL) {
    node *temp = ptr;
    ptr = ptr->next;
    free(temp);
  }

  list = NULL;
  printf("The list has been freed.\n");

  return 0;
}