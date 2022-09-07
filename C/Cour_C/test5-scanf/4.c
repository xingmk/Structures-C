#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char a, b, c, d;
  a = 'a';
  b = 'b';
  c = 'c';
  d = 'd';

  printf("%c\n", a);
  printf("%c%c\n", b, b);
  printf("%c%c%c\n", c, c, c);
  printf("%c%c%c%c\n", d, d, d, d);

  return 0;
}
