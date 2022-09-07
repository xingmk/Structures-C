#include <stdio.h>
#include <stdlib.h>

void bubble(int *arr, int len) {

  for (int i = 1; i < len - 2; i++) {
    for (int j = 1; j < len - 1 - i; j++) {
      if (arr[j] < arr[j + 1]) {
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
  printf("Enter ten number to array\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  bubble(a, 10);

  for (int j = 0; j < 10; j++) {
    printf("%d", a[j]);
  }

  return 0;
}
