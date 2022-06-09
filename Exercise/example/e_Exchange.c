// 两个数值的交换

#include <stdio.h>
#include <stdlib.h>

void exch(int *x, int *y) {

  int t;
  t = *x;
  *x = *y;
  *y = t;
}

int main(int argc, char *argv[]) {
  int a, b;
  scanf("%d%d", &a, &b);

  exch(&a, &b);
  printf("a= %4d, b= %4d\n", a, b);

  return 0;
}
