#include <stdio.h>
int main() {

  for (int i = 0; i < 5; i++) {       //行数
    for (int j = 0; j < i + 1; j++) { //每行个数

      printf("*"); //打印×
    }
    printf("\n"); //换行
  }

  return 0;
}
