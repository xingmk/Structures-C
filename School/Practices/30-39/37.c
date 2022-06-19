#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  float a[3][3], sum = 0;
  int i, j;
  printf("enter rectangle element: \n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%f", &a[i][j]);
    }
  }
  for (i = 0; i < 3; i++) {
    sum += a[i][i];
  }

  printf("dui jiao xian he %6.2f", sum);
  return 0;
}
