#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  for (int i = 0; i < 301; i++) {
    if (i % 5 != 0 && i % 17 != 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}
