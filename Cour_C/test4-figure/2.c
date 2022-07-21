#include <stdio.h>
#include <stdlib.h>

#define Pai 3.14

int main(int argc, char *argv[]) {
  const double r = 5;
  printf("S=%lf\n", Pai * r * r);
  printf("C=%lf", 2 * Pai * r);

  return 0;
}
