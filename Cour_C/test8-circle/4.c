#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = 0;
  char x;
  printf("enter characters\n");

  do {
    i++;
  } while (getchar() != '\n');

  printf("SUM=%d", i - 1);

  return 0;
}
