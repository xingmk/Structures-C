#include <stdio.h>

int main() {

  int a[10] = {2, 4, 5, 6, 9, 11, 13, 16, 17, 19}, i, sum = 0;

  printf("数组中的初始值是:");
  for (i = 0; i < 10; i++) {
    printf("%d\t", a[i]);
  }
  printf("\n");
  printf("数组中的奇数为:\n");

  int b[10];
  for (i = 0; i < 10; i++) {
    for (int j = 0; j <= i; j++)
      if (a[i] % 2 != 0) {
        b[j] = a[i];
        sum++;
      }
    printf("%d\t", b[i]);
  }

  printf("数组中的奇数个数为:%d\n", sum);
  return 0;
}
