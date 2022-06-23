#include <stdio.h>

int main() {
  int a[20] = {0, 1}, i;
  for (i = 2; i < 20; i++) {
    a[i] = a[i - 1] + a[i - 2];
  }
  printf("斐波那契数列的前20项为：\n");

  for (i = 0; i < 20; i++) {
    printf("%d\t", a[i]);
  }
  return 0;
}
