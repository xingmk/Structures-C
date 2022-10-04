#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x, y, z;

  for (int i = 100; i <= 999; i++) {
    x = i % 10;
    y = i / 10 % 10;
    z = i / 100 % 10;

    if (i == (x * x * x + y * y * y + z * z * z)) {
      printf("%d\n", i);
    }
  }
  return 0;
}
