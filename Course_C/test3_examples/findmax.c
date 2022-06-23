#include <stdio.h>

int max(int x, int y);

int main() {

  int a, b, c, maxs;
  scanf("%d%d%d", &a, &b, &c);
  maxs = max(a, max(b, c));
  printf("%d", maxs);
}

int max(int x, int y) {
  int t;
  t = x > y ? x : y;

  return t;
}
