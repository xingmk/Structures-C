#include <stdio.h>

int main() {
  for (int i = 1; i < 5; i++) {
    for (int k = 0; k < 4 - i; k++) {
      printf(" ");
    }
    for (int j = 0; j < 2 * i - 1; j++) {

      printf("*");
    }
    printf("\n");
  }
  return 0;
}
