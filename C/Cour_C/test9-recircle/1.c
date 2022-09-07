#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  for (int i = 0; i < 4; i++) {       // 4行
    for (int j = 0; j < 3 - i; j++) { // 打印空格
      printf(" ");
    }
    for (int k = 0; k < 2 * i + 1; k++) { // 打印*
      printf("*");
    }
    printf("\n"); // 完成一行之后换行
  }

  return 0;
}
