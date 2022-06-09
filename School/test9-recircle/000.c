#include <stdio.h>

int main() {
  int num = 13, x, i;
  printf("\n");

  for (i = 0; i < 3; i++) {
    printf(" ", i + 1);
    scanf("%d", &x);
    if (x == num) {
      printf("\n");
      break;
    } else if (x > num) {
      printf("\n");
    } else {
      printf("\n");
    }
    if (i == 3)
      printf("%d\n", num);
  }
  return 0;
}
