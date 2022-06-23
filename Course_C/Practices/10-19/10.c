#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i, j;
  printf("\1\1\n");
  for (i = 0; i < 11; i++) {
    for (j = 1; j <= i; j++) {
      printf("%c%c", 219, 219);
    }
    printf("\n");
  }

  return 0;
}
