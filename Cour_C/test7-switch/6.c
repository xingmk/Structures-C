#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char x;
  printf("enter a letter\n");
  scanf("%c", &x);

  switch (x) {
  case 'A':
    printf("more than 90");
    break;
  case 'B':
    printf("between 80 and 90");
    break;
  case 'C':
    printf("between 70 and 80");
    break;
  case 'D':
    printf("between 60 and 70");
    break;
  case 'E':
    printf("less than 60");
    break;
  default:
    printf("None");
    break;
  }

  return 0;
}
