#include <stdio.h>
#include <stdlib.h>

int max(int x, int y) {
  int t;
  t = x > y ? x : y;

  return t;
}

int main(int argc, char *argv[]) {
  int a, b, c, x;
  printf("enter three values to abc\n");
  scanf("%d %d %d", &a, &b, &c);

  if (a > b) {
    x = max(a, c);
  } else {
    x = max(b, c);
  }

  printf("max num = %d", x);

  return 0;
}
