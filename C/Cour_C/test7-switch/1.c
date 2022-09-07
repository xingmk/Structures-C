#include <stdio.h>
#include <stdlib.h>

int leapyear(int x) {
  if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main(int argc, char *argv[]) {
  int year, flag;
  printf("enter a value to year\n");
  scanf("%d", &year);

  if (leapyear(year)) {
    printf("This year is leapyear");
  } else {
    printf("This year isnot leapyear");
  }

  return 0;
}
