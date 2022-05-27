#include <stdio.h>
int main() {
  const double r = 5;
  printf("square radii:%lf\n", r);
  printf("the area of the square is:%lf\n", 3.1415926 * r * r);
  printf("the girth of the square is:%lf\n", 2 * 3.1415926 * r);

  return 0;
}
