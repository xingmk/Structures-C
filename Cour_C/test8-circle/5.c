#include <stdio.h>

int main(int argc, char *argv[]) {

  int a = 1, b = 3;
  double sum = 1, c = 1;

  while (c > 0.00005) {
    c = c * a / b;
    sum += c;
    a++;
    b += 2;
  }
  printf("%lf", 2 * sum);

  return 0;
}
