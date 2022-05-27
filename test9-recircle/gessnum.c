#include <stdio.h>
int main() {

  const int n = 6;
  printf("please input a num:");

  int x, i;
  for (i = 1; i < 4; i++) {

    scanf("%d", &x);
    if (x == n) {
      printf("Great");
      break;
    }
  }

  return 0;
}
