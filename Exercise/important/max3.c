#include <stdio.h>
int main() {
  int a, b, c, max;
  scanf("%d %d %d", &a, &b, &c);

  if (a > b) {

    if (a > c) {
      printf("the max is %d", a);
    } else {
      printf("max=%d", c);
    }

  } else {
    if (b > c) {
      printf("the max is %d", c);
    } else {
      max = c;
    }
  }
  return 0;
}
