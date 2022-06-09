#include <stdio.h>

int main() {

  int n;
  printf("请输入1到5有效数字");
  scanf("%d", &n);

  switch (n) {
  case 1:
    printf("等待付款");
    break;
  case 2:
    printf("等待发货");
    break;
  case 3:
    printf("运输中");
    break;
  case 4:
    printf("以签收");
    break;
  case 5:
    printf("已取消");
    break;

  default:
    printf("无法追踪");
  }

  return 0;
}
