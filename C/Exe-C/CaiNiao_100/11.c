#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int f1 = 1, f2 = 1, i;
  for (i = 0; i <= 20; ++i) {
    printf("%12d%12d", f1, f2);
    if (i % 2 == 0)
      printf("\n");
    f1 = f1 + f2;
    f2 = f1 + f2;
  }

  return 0;
}
