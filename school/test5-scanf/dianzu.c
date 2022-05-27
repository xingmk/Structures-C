#include <stdio.h>
int main() {
  double r1, r2;
  printf("please double dianzu:");
  scanf("%lf,%lf", &r1, &r2);

  printf("bing:%lf\n chuan:%lf\n", (r1 * r2) / (r1 + r2), r1 + r2);

  return 0;
}
