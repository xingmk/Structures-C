#include <stdio.h>
int main() {

  int a, b, fa, sa, fb, sb, ret;
  printf("please input two double zhengzhengshu:");
  scanf("%d%d", &a, &b);

  fa = a / 10, fb = b / 10, sa = a % 10, sb = b % 10;
  ret = fa * 1000 + fb * 100 + sa * 10 + sb;
  printf("result%d\n", ret);

  return 0;
}
