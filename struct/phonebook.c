#include <stdio.h>
#include <string.h>

typedef struct{
  char name[50];
  char phone[15];
} person;

int main(void) {
  char target_name[50];
  person people[3];

  people[0] = (person){"John Doe", "+123-456-7890"};
  people[1] = (person){"Jane Doe", "+098-765-4321"};
  people[2] = (person){"James Doe", "+321-654-0987"};

  printf("Enter a name: ");
  fgets(target_name, 50, stdin);
  target_name[strcspn(target_name, "\n")] = 0;

  for(int i = 0, size = sizeof(people)/sizeof(people[0]); i < size; i++) {
    if (strcmp(people[i].name, target_name) == 0) {
      printf("Found %s\n", people[i].phone);
      return 0;
    }
  }
  printf("Person not found\n");
  return 1;
}