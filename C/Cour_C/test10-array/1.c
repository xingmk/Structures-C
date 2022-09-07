#include <stdio.h>
#include <stdlib.h>

void exch(int *x, int *y) {

  int t;
  t = *x;
  *x = *y;
  *y = t;
}

int main(int argc, char *argv[]) {
  int a[10];
  printf("enter ten nums to arrayA\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  int max = a[9], min = a[0];
  for (int k = 1, j = 8; k<9, j> 0; k++, j--) {

    if (min > a[k + 1]) {
      min = a[k + 1];
    }

    if (a[j] < a[j - 1]) {
      max = a[j - 1];
    }
  }

  printf("MIN%d MAX%d", min, max);

  return 0;
}
