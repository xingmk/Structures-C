#include <math.h>
#include <stdio.h>

int main()

{
  double zi = 1, mu = 1, t = 1, sum = 0, x = 1;
  while (x > 0.000001) {
    t = zi / mu;
    sum += t;
    zi = -zi;
    mu += 2;
    x = fabs(t);
  }
  printf("Pai的近似值为:%lf", 4 * sum);
  return 0;
}
