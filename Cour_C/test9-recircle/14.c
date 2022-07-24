#include <stdio.h>
#include <stdlib.h>

int prime_num(int a) {

  int flag = 0;
  for (int i = 2; i < a / 2; i++) {

    if (a % i == 0) {
      flag = 0;
      break;
    } else {
      flag = 1;
    }
  }

  return flag;
}

int main(int argc, char *argv[]) {

  int sum = 0;
  for (int i = 3; i < 101; i++) {

    if (i == 3 || i == 5) {
      printf("%d\t", i);
      sum++;
    } else if (prime_num(i)) {
      printf("%d\t", i);
      sum++;
    }
  }

  printf("\nSUM = %d", sum);

  return 0;
}
