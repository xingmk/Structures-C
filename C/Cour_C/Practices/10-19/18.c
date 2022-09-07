#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a, n, count = 1;
  long int sn = 0, tn = 0;
  printf("enter a and n:\n");
  scanf("%d%d", &a, &n);

  while (count <= n) {
    tn = tn + a;
    sn = sn + tn;
    a = a * 10;
    ++count;
  }

  printf("a+aa+..=%ld\n", sn);
  return 0;
}
