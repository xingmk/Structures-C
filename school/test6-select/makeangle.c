#include <math.h>
#include <stdio.h>
int main() {
  int a, b, c;
  double s;

  printf("please input three zhengshu:");
  scanf("%d,%d,%d", &a, &b, &c);
  if (a + b > c && a + c > b && b + c > a) {
    float x = (a + b + c) / 2;
    s = sqrt(x * (x - a) * (x - b) * (x - c));
    printf("the area of the angle:%lf", s);

  } else {
    printf("can not make a angle");
  }
  return 0;
}
