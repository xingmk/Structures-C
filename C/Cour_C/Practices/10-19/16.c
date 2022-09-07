#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int m, n;
  printf("enter two numbers:\n");
  scanf("%d%d", &m, &n);

  int a = m, b = n;
  while (m % n) {
    int x = m % n;
    m = n;
    n = x;
  }
  printf("Mallest beishu:%d\n", n);
  printf("Biggest beishu:%d\n", a * b / n);

  return 0;
}
