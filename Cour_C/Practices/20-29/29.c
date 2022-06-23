#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  long a, x;
  scanf("%ld", &x);

  long b = x;
  int count = 0;
  while (x) {
    x = x / 10;
    count++;

    a = b % 10;
    b = b / 10;
    printf("%ld", a);
  }

  printf(" 位数:%d", count);

  return 0;
}
