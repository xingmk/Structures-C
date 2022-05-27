#include <stdio.h>

int main() {
  int year, month;

  printf("请输入一个有效的年份与月份");
  scanf("%d%d", &year, &month);

  switch (month) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("该月有31天");
    break;

  case 4:
  case 6:
  case 9:
  case 11:
    printf("该月有30天");
    break;

  case 2:
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
      printf("该月有29天");
    } else {
      printf("该月有28天");
    }
    break;
  default:
    printf("输入的年份与月份无效");

    return 0;
  }
}
