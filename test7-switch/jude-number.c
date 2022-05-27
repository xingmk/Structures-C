#include <stdio.h>

int main() {

  int x, ge, shi, bai, qian;
  printf("please input a num that less four wei:");
  scanf("%d", &x);
  qian = x / 1000;
  bai = x % 1000 / 100;
  shi = x % 100 / 10;
  ge = x % 10;
  if (qian != 0)
    printf("4:%d%d%d%d\n", ge, shi, bai, qian);
  else if (bai != 0)
    printf("3:%d%d%d\n", ge, shi, bai);
  else if (shi != 0)
    printf("2:%d%d\n", ge, shi);
  else if (ge != 0)
    printf("1:%d\n", ge);
  return 0;
}
