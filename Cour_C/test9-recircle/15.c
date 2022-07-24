#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int sum = 0;
  for (int i = 1; i < 101; i++) {
    if (i % 5 == 0 && i % 7 != 0) {
      printf("%d\t", i);
      sum++;
    } else if (i % 5 != 0 && i % 7 == 0) {
      printf("%d\t", i);
      sum++;
    }
  }

  printf("\n%d", sum);

  return 0;
}
