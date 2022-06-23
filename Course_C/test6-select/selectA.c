#include <stdio.h>

int main() {
  int a, b;
  printf("please input double zheng shu a,b:\n");
  scanf("%d%d", &a, &b);

  if (b > a) {
    a = b;
  }
  printf("the max num is:%d", a);
  return 0;
}
