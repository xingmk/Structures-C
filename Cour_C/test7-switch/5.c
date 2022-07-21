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

  int year, month, day;
  printf("enter two values to year and month\n");
  scanf("%d %d", &year, &month);

  if (leapyear(year)) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
        month == 10 || month == 12) {
      day = 31;
      printf("day=%d", day);
    } else if (month == 2) {
      day = 29;
      printf("day=%d", day);
    } else {
      day = 30;
      printf("day=%d", day);
    }
  } else {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
        month == 10 || month == 12) {
      day = 31;
      printf("day=%d", day);
    } else if (month == 2) {
      day = 28;
      printf("day=%d", day);
    } else {
      day = 30;
      printf("day=%d", day);
    }
  }

  return 0;
}
