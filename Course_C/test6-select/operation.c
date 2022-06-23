#include <stdio.h>

int main() {
  double a, b, d, e;
  char c;

  printf("请输入一个四则运算符跟两个数字:");
  scanf("%c%lf%lf", &c, &a, &b);
  if (c != '+' && c != '-' && c != '*' && c != '/') {
    printf("非法运算符，无法参与运算");
  } else {
    if (c == '+') {
      d = a + b;
      printf("%lf=%lf+%lf\n", a, b, d);
    } else if (c == '-') {
      d = a - b;
      e = b - a;
      printf("%lf-%lf=%lf\n", a, b, d);
      printf("%lf-%lf=%lf\n", b, a, e);
    } else if (c == '*') {
      d = a * b;
      printf("%lf*%lf=%lf", a, b, d);
    } else {
      d = a / b;
      e = b / a;
      printf("%lf/%lf=%lf\n", a, b, d);
      printf("%lf/%lf=%lf\n", b, a, e);
    }
  }
  return 0;
}
