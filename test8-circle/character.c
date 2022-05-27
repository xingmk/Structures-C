#include <stdio.h>

int main() {
  int sum = 0;
  char x;
  x = getchar();
  while (x != '\n') {
    sum++;
    x = getchar();
  }

  printf("sum=%d", sum);

  return 0;
}
