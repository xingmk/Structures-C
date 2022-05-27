#include <stdio.h>
int main() {

  int x;
  scanf("%d", &x);

  int i;
  int isprime = 1; //设置初始素数是1
  for (i = 2; i < x; i++) {

    if (x % i == 0) {

      isprime = 0;
    }
  }
  if (isprime == 1) {

    printf("is sushu\n");
  } else {
    printf("not sushu\n");
  }

  return 0;
}
