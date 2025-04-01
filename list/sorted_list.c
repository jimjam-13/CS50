#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} node;

int main(void) {
  // input number of nodes
  int n;
  printf("No. of elements in the list: ");
  scanf("%d", &n);

  node *list = NULL; // pointer to first node

  for(int i = 0; i < n; i++) {
    node *new_node = malloc(sizeof(node));
    if(new_node == NULL) {
      printf("Memory allocation error\n");
      // free preallocated space
      if(list != NULL) {
        for (node *ptr = list; ptr != NULL; ) {
          node *temp = ptr;
          ptr = ptr->next;
          free(temp);
        }
        list = NULL;
      }
      return 1;
    }

    printf("Enter number: ");
    scanf("%d", &new_node->data);

    if(list == NULL) {
      new_node->next = NULL;
      list = new_node;
    } 
    else if (new_node->data < list->data) {
      new_node->next = list;
      list = new_node;
    }
    else {
      for(node *ptr = list; ptr != NULL; ptr = ptr->next) {
        if(ptr->next == NULL) {
          new_node->next = NULL;
          ptr->next = new_node;
          break;
        }
        if(new_node->data < ptr->next->data) {
          new_node->next = ptr->next;
          ptr->next = new_node;
          break;
        }
      }
    }
  }

  // print list
  printf("The list is: ");
  for(node *ptr = list; ptr != NULL; ptr = ptr->next) {
    printf("%d ", ptr->data);
  }
  printf("\n");

  //free allocated memory
  for(node *ptr = list; ptr != NULL; ) {
    node *temp = ptr;
    ptr = ptr->next;
    free(temp);
  }
  list = NULL;
  printf("The list has been freed.\n");

  return 0;
}