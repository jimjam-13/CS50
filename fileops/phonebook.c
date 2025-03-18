#include <stdio.h>
#include <string.h>

int main() {
  FILE *file = fopen("phonebook.csv", "a");

  char name[50], phone[15];

  if (file == NULL) {
    printf("Error opening file\n");
    return 1;
  }

  printf("Enter name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = 0;

  printf("Enter phone number: ");
  fgets(phone, sizeof(phone), stdin);
  phone[strcspn(phone, "\n")] = 0;

  fprintf(file, "%s,%s\n", name, phone);

  fclose(file);

  return 0;
}