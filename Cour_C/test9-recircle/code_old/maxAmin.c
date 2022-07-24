#include <stdio.h>

int main() {

  int i, a[10], max, min;
  printf("please input ten number:");

  for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  max = min = a[9];

  for (i = 1; i < 10; i++) {
    if (max < a[i])
      max = a[i];
    else if (min > a[i])
      min = a[i];
  }

  printf("最大为:%d\n最小为:%d\n", max, min);
  return 0;
}
