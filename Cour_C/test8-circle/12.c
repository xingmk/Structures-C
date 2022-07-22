#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double factorial(int n) {

  int p = 1;
  for (int i = 1; i <= n; i++) {
    p *= i;
  }
  return p;
}

int main(int argc, char *argv[]) {
  int i = 1;
  double a = 1, b = 1, c, sum = 1;

  do {
    a = -a;
    b = factorial(i++);
    c = a / b;
    sum += c;
  } while (fabs(c) > 1e-6);

  printf("N=%d \t Sum=%lf", i, sum);

  return 0;
}
