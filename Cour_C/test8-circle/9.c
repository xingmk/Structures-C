#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int i = 0, sum = 0;
  while (i < 101) {
    if (i % 5 == 0 && i % 7 != 0) {
      printf("%d\t", i);
      sum++;
    }
    i++;
  }
  printf("\nThe num that meets condition %d", sum);

  return 0;
}
