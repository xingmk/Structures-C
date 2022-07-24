#include <stdio.h>
#include <stdlib.h>

void bubble(int *arr, int len) {

  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp;
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main(int argc, char *argv[]) {

  int a[10];
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  bubble(a, 10);

  printf("Min=%d\n", a[0]);
  printf("Max=%d", a[9]);

  return 0;
}
