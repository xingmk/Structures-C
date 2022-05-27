#include <stdio.h>

int main() {
  int sum;
  char x;
  printf("请输入一行字符：");
  do {
    x = getchar();
    sum++;

  } while (x != '\n');
  printf("输入的字符个数为:%d", sum - 1);
  return 0;
}
