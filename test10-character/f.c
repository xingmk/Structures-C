#include <stdio.h>
int main() {

  int a[4][5] = {{1, 2, 3, 4, 5},
                 {6, 7, 8, 9, 10},
                 {11, 12, 13, 14, 15},
                 {16, 17, 18, 19, 20}};

  int max;
  for (int i = 0; i < 4; i++) {
    max = a[i];
    for (int j = 0; j < 5; j++) {

      if (a[i][j] > max) {

        max = a[i][j];
      }
    }
    printf("第%d行的最大值是：%d\n", max);
  }

  return 0;
}
