#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int max, i;
  for (i = 0; i <= 300; i++) {
    if (i % 17 == 0) {
      max = i;
    }
  }
  printf("%d", max);

  return 0;
}
