#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a, b;
  printf("enter two values to a and b\n");
  scanf("%d %d", &a, &b);

  int x1 = a / 10;
  int x2 = b / 10;
  int y1 = a % 10;
  int y2 = b % 10;

  printf("new num=%d%d%d%d", x1, x2, y1, y2);
  return 0;
}
