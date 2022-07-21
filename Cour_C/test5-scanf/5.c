#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char a, b, c;
  printf("enter three values to abc\n");
  scanf("%c %c %c", &a, &b, &c);

  int x, y, z;
  x = a - '0';
  y = b - '0';
  z = c - '0';
  printf("x=%d\n", x);
  printf("y=%d\n", y);
  printf("z=%d\n", z);

  double aver;
  aver = (x + y + z) / 3;
  printf("average=%lf", aver);

  return 0;
}
