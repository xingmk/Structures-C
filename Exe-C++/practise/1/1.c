#include <stdio.h>
#include <stdlib.h>

int fish(int n, int k) {
  if ((k - 1) % 5 == 0) {
    if (n == 1) {
      return 1;
    } else {
      return fish(n - 1, (k - 1) / 5 * 4);
    }
  }

  return 0;
}

int main(int argc, char *argv[]) {
  int i = 0, flag = 0, x;
  do {
    i = i + 1;
    x = i * 5 + 1;
    if (fish(5, x)) {
      flag = 1;
      printf("无人合伙捕鱼的总数为%d\n", x);
    }
  } while (!flag);

  return 0;
}
