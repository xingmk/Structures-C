#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i, j, k;
  printf("\n");
  for (i = 1; i < 5; i++) {
    for (j = 0; j < 5; ++j) {
      for (k = 0; k < 5; k++) {
        if (i != k && i != j && j != k) {
          printf("%d,%d,%d\n", i, j, k);
        }
      }
    }
  }

  return 0;
}
