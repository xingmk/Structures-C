#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double a, b;
  printf("enter two values to a and b\n");
  scanf("%lf", &a);
  scanf("%lf", &b);

  printf("Bing lian RP=%.2lf\n", (a * b) / (a + b));
  printf("Chuan lain RS=%.2lf", a + b);

  return 0;
}
