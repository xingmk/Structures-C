#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double S(int a, int b, int c) {
  double s, x;
  x = (a + b + c) / 2;
  s = sqrt(x * (x - a) * (x - b) * (x - c));
  return s;
}

int main(int argc, char *argv[]) {
  int a, b, c;
  double s;
  printf("enter three nums to abc\n");
  scanf("%d%d%d", &a, &b, &c);

  if (a + b > c && a + c > b && b + c > a) {
    s = S(a, b, c);
    printf("S=%lf", s);
  } else {
    printf("cannot be a angle");
  }

  return 0;
}
