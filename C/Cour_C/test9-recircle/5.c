#include <stdio.h>
#include <stdlib.h>
#define N 78

int main(int argc, char *argv[]) {
  int x;
  printf("enter a num:\n");
  scanf("%d", &x);

  for (int i = 0; i < 3; i++) {
    if (x == N) {
      printf("grate\n");
    }
    if (x < N) {
      printf("small\n");
    }
    if (x > N) {
      printf("big\n");
    }
  }

  return 0;
}
