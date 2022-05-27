#include <stdio.h>
int mian() {

  int a, b;
  printf("please input two number");
  scanf("%d %d", &a, &b);
  int max = b;
  if (a > b) {
    max = a;
  }

  printf("the max is %d\n", max);

  return 0;
}
