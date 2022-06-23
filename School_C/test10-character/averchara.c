#include <stdio.h>

int main() {

  int a[10] = {3, 6, 1, 7, 8, 4, 9, 5, 10, 2}, i;
  int sum;
  double aver;
  printf("数组的初始值是:");
  for (i = 0; i < 10; i++) {
    printf("%d\t", a[i]);
    sum += a[i];
  }

  aver = sum / 10;
  int number;
  int b[10];
  for (i = 0; i < 10; i++) {
    if (a[i] > aver) {
      number = b[i];
    }
  }
  printf("数组中比平均数大的数是：%d\t", number);
  return 0;
}
