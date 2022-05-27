#include <stdio.h>
int mian() {
  int i, j;
  int sum = 0, count = 0;
  int arr[4][5] = {{1, 5, 3, 7, 6},
                   {12, 15, 18, 14, 17},
                   {25, 24, 21, 27, 29},
                   {37, 32, 36, 31, 35}};
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 5; j++) {

      printf("%-2d", arr[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      sum += arr[i][j];
    }
  }
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 4; j++) {
      count += arr[i][j];
    }
  }

  printf("外围数字的和为：%d", sum - count);
  return 0;
}
