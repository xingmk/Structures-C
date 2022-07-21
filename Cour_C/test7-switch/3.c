#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int fun(int a, int b, int c) {
  double x;
  x = b * b - 4 * a * c;
  if (x >= 0) {
    return 1;
  } else {
    return 0;
  }
}

int main(int argc, char *argv[]) {

  double x, x1, x2, a, b, c;
  printf("enter three nums to abc\n");
  scanf("%lf %lf %lf", &a, &b, &c);

  if (fun(a, b, c)) {

    x = b * b - 4 * a * c;
    x1 = (-b + sqrt(x)) / (2 * a);
    x2 = (-b - sqrt(x)) / (2 * a);
    printf("X1=%.2lf X2=%.2lf", x1, x2);

  } else {

    printf("This func cannot be operated");
  }

  return 0;
}
