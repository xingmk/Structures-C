#include <stdio.h>
#include <stdlib.h>

int max(int x, int y) {
  int t;
  t = x > y ? x : y;

  return t;
}

int main(int argc, char *argv[]) {

  int a, b, Max;
  printf("enter two values to ab\n");
  scanf("%d %d", &a, &b);

  Max = max(a, b);
  printf("Max=%d", Max);

  return 0;
}
