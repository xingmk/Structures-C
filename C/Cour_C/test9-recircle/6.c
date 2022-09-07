#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a[10];
  for (int i = 0; i < 10; i++) { //向数组输入整数
    scanf("%d", &a[i]);
  }

  int *p;
  p = a;                         // 指向数组首地址
  for (int j = 0; j < 10; j++) { // 顺序
    printf("%d", *p);
    p++;
  }

  printf("\n");

  int *b; // 指向数组末地址
  b = &a[9];
  for (int k = 10; k > 0; k--) { // 逆序
    printf("%d", *b);
    b--;
  }

  return 0;
}
