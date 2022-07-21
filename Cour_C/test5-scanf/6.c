#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a, b, c;

  printf("enter three values to abc\n");
  scanf("%d %d %d", &a, &b, &c);

  double x, s;

  x = (a + b + c) / 2;
  s = sqrt(x * (x - a) * (x - b) * (x - c));
  printf("S=%lf", s);
  return 0;
}
