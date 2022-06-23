#include <stdio.h>
#include <stdlib.h>

void exch(int *x, int *y);
int main(int argc, char *argv[]) {
  int x, y, z;
  printf("enter three nums:");
  scanf("%d%d%d", &x, &y, &z);

  if (x > y) {
    exch(&x, &y);
  }
  if (x > z) {
    exch(&x, &z);
  }
  if (y > z) {
    exch(&y, &z);
  }
  printf("small to large:%d %d %d", x, y, z);
  return 0;
}

void exch(int *x, int *y) {

  int t;
  t = *x;
  *x = *y;
  *y = t;
}
