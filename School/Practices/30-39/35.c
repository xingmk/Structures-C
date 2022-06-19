#include <stdio.h>
#include <stdlib.h>

int prime_num(int a) {

  int flag;
  for (int i = 2; i < a / 2; i++) {

    if (a % i == 0) {
      flag = 0;
      break;
    } else {
      flag = 1;
    }
  }
  if (flag == 0) {
    return 0;
  } else {
    return 1;
  }
}
int main(int argc, char *argv[]) {
  int x, j;
  for (int j = 0; j < 101; j++) {
    if (prime_num(j)) {
      printf("%d\n", j);
    }
  }

  return 0;
}
