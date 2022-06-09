#include <stdio.h>
#include <stdlib.h>

int fun(int);
int main(int argc, char *argv[]) {
  int n;
  printf("enter a num:");
  scanf("%d", &n);

  int x;
  x = fun(n);
  printf("阶乘结果:%d", x);
  return 0;
}

int fun(int n) {

  int p = 1;
  for (int i = 1; i <= n; i++) {
    p *= i;
  }
  return p;
}
