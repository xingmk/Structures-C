#include <stdio.h>
#include <stdlib.h>

int fun(int);
int main(int argc, char *argv[]) {

  int i, num;
  int sum = 0;
  for (i = 1; i < 21; i++) {

    num = fun(i);
    sum += num;
  }

  printf("%d", sum);

  return 0;
}

int fun(int n) {

  int p = 1;
  for (int i = 1; i <= n; i++) {
    p *= i;
  }
  return p;
}
