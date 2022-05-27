#include <stdio.h>

int main() {
  int i = 1;
  double mu = 0, t, sum = 0;

  for (i = 1; i <= 10; i++) {

    mu += i;
    t = 1 / mu;
    sum += t;
  }
  printf("result:%lf", sum);
}
