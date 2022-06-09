#include <stdio.h>

int main() {
  int a[10] = {3, 6, 1, 7, 8, 9, 5, 2, 10}, i, max, min;

  printf("数组中的初始值是:");
  for (i = 0; i < 10; i++) {
    printf("%d \t", a[i]);
  }

  max = min = a[1];
  for (i = 1; i < 10; i++) {

    if (a[i] > max) {
      max = a[i];
    } else if (a[i] < min) {
      min = a[i];
    }
  }
  printf("数组中的最大值= %d", max);
  printf("数组中的最小值= %d", min);

  return 0;
}
