#include <stdio.h>

int main() {
  int i, n = 1, m;
  for (i = 1; i <= 9; i++) {   //九行
    for (n = 1; n <= 9; n++) { //九列
      m = i * n;
      printf("%d*%d=%d", n, i, i * n);
      printf("\t");
    }
    printf("\n");
  }

  return 0;
}
