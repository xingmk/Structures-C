#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int a[4][5] = {{1, 2, 3, 4, 5},
                 {6, 7, 8, 9, 10},
                 {11, 12, 13, 14, 15},
                 {16, 17, 18, 19, 20}};
  int b[20], c = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      b[c] = a[i][j];
      c++;
    }
  }

  for (int k = 0; k < 20; k++) {
    printf("%d\t", b[k]);
  }

  return 0;
}
