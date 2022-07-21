#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x;
  printf("enter a num and less than four digits\n");
  scanf("%d", &x);

  while (x) {

    int y = x % 10;
    printf("%d", y);
    x = x / 10;
  }

  return 0;
}
