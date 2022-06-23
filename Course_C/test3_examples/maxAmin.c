#include <stdio.h>

int main() {

  int m, n, r, mo, no;
  scanf("%d%d", &m, &n);
  mo = m;
  no = n;
  while (m % n > 0) {

    r = m % n;
    m = n;
    n = r;
  }
  printf("max gong yue:%d", n);
  printf("min gong bei:%d", mo * no / n);

  return 0;
}
