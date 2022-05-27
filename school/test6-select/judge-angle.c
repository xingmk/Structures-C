#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;
  printf("请输入三个正整数");
  scanf("%d%d%d", &a, &b, &c);

  if (a + b > c && a + c > b && b + c > a) {
    if (a == b && b == c && a == c) {
      printf("可构成正三角形");
    } else if (a == b || b == c || a == c) {
      printf("可构成等腰三角形");
    } else if (a * a + b * b == c * c || a * a + c * c == b * b ||
               b * b + c * c == a * a) {
      printf("可构成直角三角形");
    } else {
      printf("可构成普通三角形");
    }

  } else {
    printf("不能构成三角形");
  }

  return 0;
}
