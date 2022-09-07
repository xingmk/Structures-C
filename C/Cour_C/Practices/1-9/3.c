#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  long int i, x, y, z;
  for (i = 0; i < 10000; i++) {
    x = sqrt(i + 100);
    y = sqrt(i + 268);

    if (x * x == i + 100 && y * y == i + 268) {
      printf("\n%ld\n", i);
    }
  }

  return 0;
}
