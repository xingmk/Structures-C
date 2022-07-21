#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x, y;
  printf("enter a value to x\n");
  scanf("%d", &x);

  if (x <= 1) {
    y = x + 5;
  } else if (x > 1 && x <= 10) {
    y = 2 * x;
  } else {
    y = 3 / (x - 10);
  }

  printf("values = %d", y);

  return 0;
}
