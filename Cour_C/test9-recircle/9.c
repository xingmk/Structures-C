#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n;
  printf("enter value to n:\n");
  scanf("%d", &n);

  double sum = 0, j = 0;

  for (int i = 1; i <= n; i++) {
    j += sqrt(i);
    sum += j;
  }

  printf("%.2lf", sum);

  return 0;
}
