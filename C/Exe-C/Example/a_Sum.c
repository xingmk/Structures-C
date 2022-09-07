// 三种方法求和

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = 0, sum = 0;
  // for
  for (i = 0; i < 1000; i++) {
    sum += i;
  }

  // while
  while (i <= 1000) {
    sum += i;
    i++;
  }

  // do-while
  do {
    i++;
    sum += i;
  } while (i < 1000);
  return 0;

  int k = 1;
  while (k--)
    ;
  printf("%d", k);

  return 0;
}
