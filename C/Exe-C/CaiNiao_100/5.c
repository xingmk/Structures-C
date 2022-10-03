#include <stdio.h>
#include <stdlib.h>

/** #define MAX(x, y) ((x) > (y) ? (x) : (y)) */
void Exch(int *x, int *y) {
  int t;
  t = *x;
  *x = *y;
  *y = t;
}
int main(int argc, char *argv[]) {
  int x, y, z;
  printf("\n Enter three num:\n");
  scanf("%d%d%d", &x, &y, &z);

  if (x > y)
    Exch(&x, &y);
  if (x > z)
    Exch(&x, &z);
  if (y > z)
    Exch(&y, &z);
  printf("Samll to Big:%d%d%d\n", x, y, z);
  return 0;
}
