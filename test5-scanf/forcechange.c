#include <math.h>
#include <stdio.h>

int main() {
  char a, b, c;
  double aver;

  printf("please input three zifu:");
  scanf("%c%c%c", &a, &b, &c);

  aver = ((int)a + (int)b + (int)c) / 3.0;
  printf("%lf", aver);

  return 0;
}
