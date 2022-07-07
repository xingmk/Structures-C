#include <stdio.h>
#include <stdlib.h>

int age(int n) {
  int sum;
  if (n == 1) {
    sum = 10;
  } else {
    sum = age(n - 1) + 2;
  }
  return sum;
}
int main(int argc, char *argv[]) {

  int n;
  printf("求第n个人的年龄，请输入n的值\n");
  scanf("%d", &n);
  printf("第%d个人的年龄为%d", n, age(n));

  return 0;
}
