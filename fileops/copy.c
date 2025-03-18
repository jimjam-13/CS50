#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]) {
  FILE *src, *dst;
  BYTE byte;

  if (argc != 3) {
    printf("Usage: %s <source> <destination>\n", argv[0]);
    return 1;
  }

  src = fopen(argv[1], "rb");
  if (src == NULL) {
    printf("Error opening source file\n");
    return 1;
  }

  dst = fopen(argv[2], "wb");
  if (dst == NULL) {
    printf("Error opening destination file\n");
    fclose(src);
    return 1;
  }

  while (fread(&byte, sizeof(byte), 1, src) != 0) {
    fwrite(&byte, sizeof(byte), 1, dst);
  }

  fclose(src);
  fclose(dst);

  return 0;
}