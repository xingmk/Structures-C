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
  return flag;
}

int main(int argc, char *argv[]) {
  int x;
  printf("enter a num\n");
  scanf("%d", &x);

  if (prime_num(x)) {
    printf("It's prime num\n");
  } else {
    printf("It isn't prime num\n");
  }

  return 0;
}
