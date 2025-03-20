#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]) {
  int flag = 0;

  // Check for correct number of arguments
  if (argc != 2) {
    printf("Please provide only one filename\n");
    return 1;
  }

  // Open the file
  FILE *file = fopen(argv[1], "r");

  // Check if file exists
  if (file == NULL) {
    printf("File does not exist\n");
    return 1;
  }

  // Create buffer for file
  uint8_t buffer[4];

  // Create an array of signature bytes
  uint8_t signature[4] = {0x25, 0x50, 0x44, 0x46};

  // Read the first 4 bytes from the file
  fread(buffer, sizeof(uint8_t), 4, file);

  // Compare the first 4 bytes with the signature bytes
  for (int i = 0; i < 4; i++) {
    if (buffer[i] != signature[i]) {
      flag = 1;
      break;
    }
  }

  // Success!
  if (flag == 0) {
    printf("PDF file\n");
  } else {
    printf("Not a PDF file\n");
  }
  
  // Close the file
  fclose(file);

  return 0;
}