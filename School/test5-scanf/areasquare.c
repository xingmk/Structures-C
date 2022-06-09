#include <math.h>
#include <stdio.h>

int main() {

  int a, b, c;
  double x, s;
  printf("please input three bianchang into angle:");
  scanf("%d%d%d", &a, &b, &c);
  x = 0.5 * (a + b + c);
  s = sqrt(x * (x - a) * (x - b) * (x * c));

  printf("面积是%lf", s);

  return 0;
}
