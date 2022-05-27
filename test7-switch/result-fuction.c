#include <math.h>
#include <stdio.h>

int main() {

  float a, b, c, derta, x1, x2;
  scanf("%f%f%f", &a, &b, &c);
  derta = (b * b) - (4 * a * c);
  if (derta < 0) {
    printf("方程无实数根");

  } else if (derta == 0) {
    x1 = (-b + sqrt(derta)) / (2 * a);
    printf("方程有两个相等的实数根");
    printf("x1=x2=%f\n", x1);
  } else if (derta > 0) {
    x1 = (-b + sqrt(derta)) / (2 * a);
    x2 = (-b - sqrt(derta)) / (2 * a);
    printf("方程有两个不相等的实数根");
    printf("x1=%f,x2=%f\n", x1, x2);
  }
  return 0;
}
