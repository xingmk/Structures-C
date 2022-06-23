#include <stdio.h>
#include <stdlib.h>

// N replace 10
#define N 10

int main(int argc, char *argv[]) {
  int i, j, min, tem, a[N];
  printf("inpuet ten num:\n");

  // 循环输入10个整数
  for (i = 0; i < N; i++) {
    printf("a[%d]=", i);
    scanf("%d", &a[i]);
  }
  for (i = 0; i < N; i++) {
    printf("%5d", a[i]);
    printf("\n");
  }

  // pai xu
  for (i = 0; i < N - 1; i++) {
    min = i;
    for (j = i + 1; j < N; j++) {
      if (a[min] > a[j]) {
        min = j;
        tem = a[i];
        a[i] = a[min];
        a[min] = tem;
      }
    }
  }
  for (i = 0; i < N; i++) {
    printf("%5d", a[i]);
  }

  return 0;
}
