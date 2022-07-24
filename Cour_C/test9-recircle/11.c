#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d*%d=%d ", j, i, i * j);
    }
    printf("\n");
  }

  return 0;
}
