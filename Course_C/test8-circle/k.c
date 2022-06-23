#include <stdio.h>

int main() {
  int i = 1;
  double x = 2.5, zi = 2.5, mu = 1, t = 1, sum = 0, m = 1;
  while (t >= 1e-6) {
    zi = zi * x;
    mu = mu * (m + 1);
    t = zi / mu;
    sum = sum + t;
    m++;
  }
  sum = 1 + x + sum;
  printf("表达式的值为:\n sum=%lf", sum);
  return 0;
}
