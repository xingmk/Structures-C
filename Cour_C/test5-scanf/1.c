#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double C, F;
  printf("enter a value to C\n");
  scanf("%lf", &C);

  printf("F=%.2lf", C / 5 * 9 + 32);

  return 0;
}
