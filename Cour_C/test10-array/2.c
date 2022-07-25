#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a[10];
  printf("enter ten nums \n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  int sum = 0;
  for (int j = 0; j < 10; j++) {
    if (a[j] % 2 != 0) {
      printf("%d\t", a[j]);
      sum++;
    }
  }

  printf("\nSUM%d", sum);

  return 0;
}
