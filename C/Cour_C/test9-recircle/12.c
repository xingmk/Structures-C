#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  for (int i = 1; i <= 4; i++) {
    for (int j = 0; j < 4 - i; j++) {
      printf(" ");
    }
    for (int k = 0; k < 2 * i - 1; k++) {
      printf("*");
    }
    printf("\n");
  }
  for (int a = 1; a <= 3; a++) {
    for (int b = 0; b < a; b++) {
      printf(" ");
    }
    for (int c = 0; c < 7 - 2 * a; c++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
