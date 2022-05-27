#include <stdio.h>

void f1(int num) { //数字1：打印矩形

  printf("square: ");
  printf("\n");
  for (int i = 0; i < 4; i++) {

    printf("**** \n");
  }
}

void f2(int num) { //数字2：打印直角三角形

  printf(" right angled: ");
  printf("\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j <= i; j++) {

      printf("*");
    }
    printf("\n");
  }
}

void f3(int num) { //数字3：打印正三角形

  printf("zheng angled: ");
  printf("\n");
  for (int i = 0; i < 4; i++) {       //四格行数
    for (int k = 0; k < 3 - i; k++) { //打印空格
      printf(" ");
    }
    for (int j = 0; j < (i * 2 + 1); j++) { //打印×

      printf("*");
    }
    printf("\n");
  }
}

void f4(int num) { //打印倒三角形
  printf("dao angled:  ");
  printf("\n");
  for (int i = 1; i < 5; i++) {        //打印四行
    for (int k = 0; k <= i - 1; k++) { //打印空格数

      printf(" ");
    }
    for (int j = 0; j < 9 - 2 * i; j++) { //打印×

      printf("*");
    }
    printf("\n");
  }
}

void f5(int num) {
  for (int i = 0; i < 5; i++) {       //打印正三角
    for (int k = 0; k < 4 - i; k++) { //打印空格
      printf(" ");
    }
    for (int j = 0; j < 2 * i + 1; j++) { //打印×
      printf("*");
    }
    printf("\n");
  }
  for (int m = 1; m < 5; m++) {   //打印倒三角形
    for (int n = 0; n < m; n++) { //打印空格
      printf(" ");
    }
    for (int q = 0; q < 9 - 2 * m; q++) { //打印×
      printf("*");
    }
    printf("\n");
  }
}
int main() {

  int num;
  printf("please input a number: ");
  scanf("%d", &num);
  switch (num) { //选择函数
  case 1:
    f1(num);
    break;
  case 2:
    f2(num);
    break;
  case 3:
    f3(num);
    break;
  case 4:
    f4(num);
    break;
  case 5:
    f5(num);
    break;
  default:;
  }

  return 0;
}
