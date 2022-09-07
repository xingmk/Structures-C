#include <stdio.h>

int main() {
  int x, i;
  printf("please input a prime:");
  scanf("%d", &x);

  int isprime = 1;          //设置初始素数为1
  for (i = 2; i < x; i++) { //除1和本身之外对x求余
    if (x % i == 0) {
      isprime = 0;
    }
  }
  if (isprime == 0)
    printf("is not prime");
  else {
    printf("is prime");
  }
  return 0;
}
