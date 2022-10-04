#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n, i;
  printf("Enter a num: ");
  scanf("%d", &n);
  for (i = 2; i <= n; i++) {
    while (n % i == 0) {
      printf("%d", i);
      n /= i;
      if (n != 1)
        printf("*");
    }
  }
  return 0;
}
