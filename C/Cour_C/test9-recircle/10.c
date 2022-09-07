#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double sum = 0, j, mu = 0;
  for (int i = 1; i <= 10; i++) {
    mu += i;
    j = 1 / mu;
    sum += j;
  }

  printf("%lf", sum);

  return 0;
}
