#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int i = 0;
  int sum = 0;

  while (i < 101) {
    sum += i;
    i++;
  }

  printf("SUM=%d", sum);
  return 0;
}
