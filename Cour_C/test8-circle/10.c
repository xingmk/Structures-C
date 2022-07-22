#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  double c = 1, sum = 0, a = 1, b = 1;
  while (fabs(c) > 0.000001) {
    c = a / b;
    sum += c;

    a = -a;
    b += 2;
  }

  printf("PAI=%lf", 4 * sum);

  return 0;
}
