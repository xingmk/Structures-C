#include <stdio.h>

int main() {
  int a, b, sum, i;
  i = 0;
  a = 0;
  b = 1;
  do {
    sum = a + b;
    i++;
    printf("%d\t", sum);
    a = b;
    b = sum;
  } while (i < 18);
  return 0;
}
