#include <stdio.h>

int main() {
  int a[10];
  int i, m, n;
  printf("please input ten number:");
  scanf("%d", &a[10]);

  for (i = 0; i < 10; i++) {
    printf("%d\t", a[i]);
  }

  for (i = 9; i > -1; i--) {
    printf("%d\t", a[i]);
  }

  return 0;
}
