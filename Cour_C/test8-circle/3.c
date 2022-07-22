#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = 0;
  int sum = 0;

  do {
    i++;
    sum += i;
  } while (i < 100);

  printf("sum=%d", sum);

  return 0;
}
