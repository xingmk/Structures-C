#include <stdio.h>
#include <stdlib.h>

int PrimeNum(int a) {

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
  for (int i = 101; i <= 200; i++) {
    if (PrimeNum(i))
      printf("%d\t", i);
  }

  return 0;
}
