#include <stdio.h>
#include <stdlib.h>

// Adjust isn't leapyear
int LeapYear(int y) {
  if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}

// Compute SumMonth
int SumMonth(int m) {
  int sum;
  switch (m) {
  case 1:
    sum = 0;
    break;
  case 2:
    sum = 31;
    break;
  case 3:
    sum = 59;
    break;
  case 4:
    sum = 90;
    break;
  case 5:
    sum = 120;
    break;
  case 6:
    sum = 151;
    break;
  case 7:
    sum = 181;
    break;
  case 8:
    sum = 212;
    break;
  case 9:
    sum = 243;
    break;
  case 10:
    sum = 273;
    break;
  case 11:
    sum = 304;
    break;
  case 12:
    sum = 334;
    break;
  default:
    printf("data error");
    break;
  }
  return sum;
}

int main(int argc, char *argv[]) {
  int d, m, y, s;
  printf("enter year, month, day\n");
  scanf("%d,%d,%d", &y, &m, &d);

  s = SumMonth(m) + d;

  if (LeapYear(y) && m > 2)
    s++;
  printf("Total %d", s);
  return 0;
}
