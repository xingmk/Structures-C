#include <stdio.h>
#include <stdlib.h>

int f(int);

int main(int argc, char *argv[]) {
  int a, y;
  printf("enter a num:");
  scanf("%d", &a);

  y = f(a);
  printf("%d! = %d", a, y);

  return 0;
}

int f(int n) {

  int fac;
  if (n < 0) {
    printf("x<0 , error");
  } else {
    if (n == 0 || n == 1) {
      fac = 1;
    } else {
      fac = f(n - 1) * n;
    }
  }
  return fac;
}
