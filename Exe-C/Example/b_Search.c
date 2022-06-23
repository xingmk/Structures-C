// 输入几个数字 查特定重复的数字

#include <stdio.h>
#include <stdlib.h>

int countdigit(int number, int digit);
int main(int argc, char *argv[]) {
  int a, b, t;
  // original num
  printf("enter a integer:");
  scanf("%d", &a);
  // specific num
  printf("end a integer:");
  scanf("%d", &b);

  t = countdigit(a, b);
  printf("%d 中有 %d 个 %d", a, t, b);
  return 0;
}

int countdigit(int number, int digit) {

  int i = 0;
  while (number != 0) {

    if (number % 10 == digit) {
      i++;
    }
    number = number / 10;
  }
  return i;
}
