#include <stdio.h>
#include <stdlib.h>

int Adj_prime(int x) {
  int i, flag;
  for (i = 2; i < x / 2; i++)
    if (x % i == 0) {
      flag = 0;
    } else {
      flag = 1;
    }
  if (flag == 0) {
    return 0;
  } else
    return 1;
}

int main(int argc, char *argv[]) {

  int p, j;
  for (j = 101; j < 201; j++) {
    p = Adj_prime(j);
    if (p) {
      printf(" %d ", j);
    }
  }
  return 0;
}
