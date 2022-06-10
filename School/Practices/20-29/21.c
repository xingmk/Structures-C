#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x = 1, y;
  for (int i = 0; i < 9; i++) {
    y = (x + 1) * 2;
    x = y;
  }

  printf("the total is %d\n", y);
  return 0;
}
