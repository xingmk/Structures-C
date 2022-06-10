#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i, j;
  for (i = 1; i < 10; i++) {
    for (j = 1; j < 10; j++) {
      printf("%d * %d=%2d\t", i, j, i * j);
    }
    printf("\n");
  }

  return 0;
}
