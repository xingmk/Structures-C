#include <stdio.h>

int main() {

  int i, a, b, max, min;
  printf("请输入两个整数:");
  scanf("%d%d", &a, &b);

  if (a > b) {
    max = a;
    min = b;
  } else {
    max = b;
    min = a;
  }

  for (i = min; i >= 2; i--) {

    if (a % i == 0 && b % i == 0) {
      printf("%d和%d的最大公约数是:%d\n", a, b, i);
      break;
    }
  }
  for (int k = max = 1; k <= a * b; k++) {
    if (k % a == 0 && k % b == 0) {

      printf("%d和%d的最小公约数是:%d", a, b, k);
      break;
    }
  }
  return 0;
}
