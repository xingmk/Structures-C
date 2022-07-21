#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x;
  printf("enter a value to x\n");
  scanf("%d", &x);

  switch (x) {
  case 1:
    printf("waitting for payying");
    break;
  case 2:
    printf("waitting for shipping");
    break;
  case 3:
    printf("transportation");
    break;
  case 4:
    printf("have been received");
    break;
  case 5:
    printf("have been cancled");
    break;
  default:
    printf("cannot be tracked");
  }

  return 0;
}
