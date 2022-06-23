#include <stdio.h>

int main() {
  int i, a, b, c;

  for (i = 1; i < 5; i++) {
    for (a = 0; a < 4 - i; a++) {
      printf(" ");
    }
    for (b = 0; b <= 2 * i - 1; b++) {
      printf("*");
    }
    printf("\n");
  }
  for (i = 5; i < 8; i++) {
    for (int k = 0; k < 5 - i; k++) {
      printf(" ");
    }
    for (int j = 0; j < 15 - 2 * i; j++) {
      printf("*");
    }
  }

  return 0;
}
