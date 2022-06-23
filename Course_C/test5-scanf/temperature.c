#include <stdio.h>
int main() {

  double C;
  printf("please input a temperature:");
  scanf("%lf", &C);
  double F = 9 * C / 5 + 32;
  printf("the temperature of huashi is:%lf", F);

  return 0;
}
