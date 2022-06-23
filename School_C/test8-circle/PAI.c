#include <stdio.h>

int main()

{
  double x = 1, z = 1;
  int a = 1, b = 3;
  while (z > 0.00005) {
    z = z * a / b;
    x += z;
    a++;
    b += 2;
  }
  printf("Pai=%lf", 2 * x);
  return 0;
}
