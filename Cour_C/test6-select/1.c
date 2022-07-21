#include <stdio.h>
#include <stdlib.h>

int max(int x, int y) {
  int t;
  t = x > y ? x : y;

  return t;
}

int main(int argc, char *argv[]) {
  int a, b, c;
  printf("enter two values to ab\n");
  scanf("%d %d", &a, &b);
  c = max(a, b);
  a = c;
  printf("max=%d", a);
  return 0;
}
