#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double a, b, c;
  char x;
  printf("enter three values to x ab\n");
  scanf("%c %lf %lf", &x, &a, &b);

  if (x == '+' || x == '-' || x == '*' || x == '/') {

    if (x == '+') {
      printf("%.2lf + % .2lf = %.2lf", a, b, a + b);
    } else if (x == '-') {
      printf("%.2lf - % .2lf = %.2lf", a, b, a - b);
    } else if (x == '*') {
      printf("%.2lf * %.2lf = %.2lf", a, b, a * b);
    } else {
      printf("%.2lf / %.2lf = %.2lf", a, b, a / b);
    }

  } else {
    printf("cannot be operated");
  }

  return 0;
}
