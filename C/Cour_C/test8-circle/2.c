#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = 0;
  char x;
  printf("enter characters");

  while (getchar() != '\n') {
    i++;
  }

  printf("SUM=%d", i);

  return 0;
}
