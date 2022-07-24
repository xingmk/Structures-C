#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a[20] = {1, 2};
  int i, j;
  for (i = 0, j = 2; i < 17, j < 19; i++, j++) {
    a[j] = a[i] + a[i + 1];
  }

  for (int k = 0; k < 19; k++) {
    printf("%d\t", a[k]);
  }

  return 0;
}
