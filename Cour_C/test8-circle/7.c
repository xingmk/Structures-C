#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int a, b, c;
  for (int i = 100; i <= 999; i++) {
    c = i % 10;
    b = i / 10 % 10;
    a = i / 100;

    if (i == a * a * a + b * b * b + c * c * c) {
      printf("%d\n", i);
    }
  }

  return 0;
}
