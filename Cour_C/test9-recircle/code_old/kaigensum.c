#include <math.h>
#include <stdio.h>

int main() {
  int i, n;
  double t = 1, sum = 1;

  printf("please input n:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {

    t += sqrt(i);
    sum += t;
  }
  printf("%lf", sum);
  return 0;
}
