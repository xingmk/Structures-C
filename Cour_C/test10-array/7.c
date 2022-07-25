#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int a[4][5] = {{1, 2, 3, 4, 5},
                 {6, 7, 8, 9, 10},
                 {11, 12, 13, 14, 15},
                 {16, 17, 18, 19, 20}};
  int sum = 0, b[4], max;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      max = a[i][j];
      if (a[i][j + 1] > max) {
        max = a[i][j + 1];
      }
    }
    b[i] = max;
  }

  printf("\nMax:\n");
  for (int k = 0; k < 4; k++) {
    printf("%d\t", b[k]);
  }

  return 0;
}
