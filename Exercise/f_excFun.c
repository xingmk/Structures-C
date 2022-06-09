// 函数指针的传递

#include <stdio.h>
#include <stdlib.h>

int *fun(int *a, int *b) {

  if (*a > *b)
    return a;
  else
    return b;
}
int main(int argc, char *argv[]) {

  int x = 7, y = 8, *max;
  max = fun(&x, &y);
  printf("%d", *max);

  return 0;
}
