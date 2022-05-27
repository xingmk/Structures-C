#include <stdio.h>

int main() {

  int a[10] = {3, 6, 1, 7, 8, 4, 9, 5, 10, 2}, i, j, t;
  for (i = 0; i < 10; i++) {
    printf("%d", a[i]);
  }

  for (i = 1; i < 9; i++) {
    for (j = 1; j < 9 - i; j++) {
      if (a[j] > a[j + 1]) {

        t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }
  printf("中间元素重新排序后:%d\n", a[i]);
  for (i = 0; i < 10; i++) {
    printf("%d", a[i]);
  }
  return 0;
}
