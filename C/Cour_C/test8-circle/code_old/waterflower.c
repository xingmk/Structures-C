#include <stdio.h>
int main() {

  int ge, shi, bai, x;
  printf("please input a sanweishu:");
  scanf("%d", &x);

  bai = x / 100;
  shi = x % 100 / 10;
  ge = x % 10;
  while (x > 99 && x < 1000) {
    int n = ge * ge * ge + shi * shi * shi + bai * bai * bai;
    if (x == n) {
      printf("%d", x);
    }
  }
  return 0;
}
