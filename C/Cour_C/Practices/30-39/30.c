#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int x, ge, shi, bai, qian, wan;
  ge = x % 10;
  shi = x % 100 / 10;
  bai = x % 1000 / 100;
  qian = x / 1000 % 10;
  wan = x / 10000;

  if (ge == wan && shi == qian) {
    printf("%d is huiwen", x);
  } else {
    printf("%dthis isn't huiwen", x);
  }
  return 0;
}
