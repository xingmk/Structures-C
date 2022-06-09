// 判断是否为质数

#include <stdio.h>
#include <stdlib.h>

int Prime_num(int);
int main(int argc, char *argv[]) {
  int a;
  printf("extern a num:");
  scanf("%d", &a);

  int p;
  p = Prime_num(a);
  if (p) {
    printf("This is Prime_num");
  } else {
    printf("This isn't Prime_num");
  }
  return 0;
}

int Prime_num(int a) {

  int flag;
  for (int i = 2; i < a / 2; i++) {

    if (a % i == 0) {
      flag = 0;
      break;
    } else {
      flag = 1;
    }
  }
  if (flag == 0) {
    return 0;
  } else {
    return 1;
  }
}
