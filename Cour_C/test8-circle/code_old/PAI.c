#include <stdio.h>

int main() {

  int a = 1, b = 3;
  double sum = 1, z = 1;
  while (z > 0.00005) {
    z = z * a / b;
    sum += z;
    a++;
    b += 2;
  }
  printf("Pai=%lf", 2 * sum);
  return 0;
}
