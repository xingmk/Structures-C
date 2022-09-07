#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a, b, c;
  printf("enter three values to abc\n");
  scanf("%d%d%d", &a, &b, &c);

  if (a + b > c && a + c > b && b + c > a) {
    if (a == b && a == c && b == c) {
      printf("Deng bian\n");
    } else if (a == b || a == c || b == a) {
      printf("Deng yao\n");
    } else if (a * a == b * b + c * c || a * a + b * b == c * c ||
               a * a + c * c == b * b) {
      printf("Zhi jiao\n");
    } else {
      printf("normal triangle");
    }
  } else {
    printf("cannot be triangle\n");
  }

  return 0;
}
