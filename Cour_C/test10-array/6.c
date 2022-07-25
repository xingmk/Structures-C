#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a[4][5] = {{1, 2, 3, 4, 5},
                 {6, 7, 8, 9, 10},
                 {11, 12, 13, 14, 15},
                 {16, 17, 18, 19, 20}};

  int sum = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == 0 || j == 0 || i == 3 || j == 4) {
        sum += a[i][j];
      }
    }
  }

  printf("%d", sum);

  return 0;
}
