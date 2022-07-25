#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a[10], sum = 0;
  printf("Enter ten numbers\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
    sum += a[i];
  }

  int length = sizeof(a) / sizeof(a[0]);
  int aver = sum / length;
  printf("Average:%d\n", aver);

  printf("\n Larger than the average:\n ");
  for (int k = 0; k < 10; k++) {
    if (a[k] > aver) {
      printf("%d\t", a[k]);
    }
  }

  return 0;
}
