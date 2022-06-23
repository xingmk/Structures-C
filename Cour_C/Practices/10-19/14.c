#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n, i;
  printf("please input a number:\n");
  scanf("%d", &n);
  printf("%d=", n);

  for (i = 2; i <= n; i++) {
    while (n != i) {

      if (n % i == 0) {
        printf("%d*\n", i);
        n = n / i;
      } else
        break;
    }

    return 0;
  }
  printf("%d", n);
}
