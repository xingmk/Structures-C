#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int i, j;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2 * i + 1; j++) {
      printf("*");
    }
    printf("\n");
  }

  for (int k = 0; k < 3; k++) {
    for (int t = 0; t < 5 - 2 * k; t++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
