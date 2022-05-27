#include <math.h>
#include <stdio.h>

int main() {
  int n = 1;
  double zi = 1, mu = 1, t = 0, sum = 0;
  do {

    t = zi / mu;
    sum = sum + t;
    zi = (-zi);
    n++;
    mu = mu * n;

  } while (fabs(t > 0.000001));
  printf("sum=%lf\n", sum);
  printf("最后一项n=%d", n - 3);
  return 0;
}
