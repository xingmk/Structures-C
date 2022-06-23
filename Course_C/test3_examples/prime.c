#include <stdio.h>
int main() {

  int m, n, i;
  while (m--) {

    scanf("%d", &n);
    for (i = 2; i < n; i++) {

      if (n % i == 0) {
        break;
      }
      if (i == n) {
        printf("%disprime\n", n);
      } else {
        printf("%disnotprime\n", n);
      }
    }
  }
  return 0;
}
