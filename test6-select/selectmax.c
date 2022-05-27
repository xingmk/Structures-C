#include <stdio.h>

int main() {
  int a, b;
  printf("please input double zhengshu:");
  scanf("%d%d", &a, &b);

  int max;
  if (a > b) {
    max = a;
  } else {
    max = b;
  }

  printf("the max of num is:%d", max);
  return 0;
}
