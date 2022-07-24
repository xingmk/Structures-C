#include <stdio.h>
#include <stdlib.h>

// 数值交换
void exch(int *x, int *y) {

  int t;
  t = *x;
  *x = *y;
  *y = t;
}

//两个数的最大公约数--欧几里德算法
int gcd(int a, int b) {
  //总是将较小的数放在b中
  if (a < b) {
    exch(&a, &b);
  }

  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

//求a、b的最小公倍数
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int main(int argc, char *argv[]) {

  int a, b, c, d;
  printf("enter two values to a b\n");
  scanf("%d %d", &a, &b);

  c = gcd(a, b);
  d = lcm(a, b);

  if (c == 1) {
    printf("no max yue\n");
  } else {
    printf("max yue:%d\n", c);
  }

  printf("max bei:%d\n", d);

  return 0;
}
