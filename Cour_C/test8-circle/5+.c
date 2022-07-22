#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  double c = 1, sum = 1, a = 1, b = 3;

  for (int n = 1; c > 0.00005; n++) {
    c = c * a / b;
    sum += c;
    a = n;
    b = 2 * n + 1;
  }

  printf("PAI=%lf", 2 * sum);

  return 0;
}
