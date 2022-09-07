#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int a = 1, b = 2;
  int c;
  printf("%d\n%d\n", a, b);
  for (int i = 0; i < 18; i++) {
    c = a + b;
    a = b;
    b = c;
    printf("%d\n", c);
  }
  return 0;
}
