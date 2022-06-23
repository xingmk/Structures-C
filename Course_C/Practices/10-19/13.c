#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int ge, shi, bai;

  for (int i = 100; i <= 999; i++) {
    bai = i / 100;
    shi = i % 100 / 10;
    ge = i % 10;

    if (ge * ge * ge + shi * shi * shi + bai * bai * bai == i) {
      printf("%5d \n", i);
    }
  }

  return 0;
}
