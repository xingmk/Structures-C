#include <stdio.h>

int main() {

  int a[10] = {20, 18, 15, 12, 10, 9, 7, 5, 2}, i, j, t;

  printf("数组中的前九个数是:");
  for (i = 0; i < 9; i++) {
    printf("%d \t", a[i]);
  }
  printf("\n");
  printf("输入一个整数：");
  scanf("%d", &a[9]);

  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9 - i; j++) {
      if (a[j + 1] > a[j]) {

        t = a[j + 1];
        a[j] = a[j + 1];
        a[j] = t;
      }
    }
  }
  printf("重新排列后：");
  for (i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
