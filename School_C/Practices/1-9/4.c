#include <stdio.h>
#include <stdlib.h>

int Ast_year(int year);

int main(int argc, char *argv[]) {
  int day, month, year, sum, leap;
  printf("please input year,month,day");
  scanf("%d,%d,%d", &year, &month, &day);

  if (leap)
    sum++;

  printf("It's the %d day ", sum);

  return 0;
}

int Ast_year(int year) {

  int leap;
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    leap = 1;
  else
    leap = 0;

  return leap;
}

int Sum_Mon(int month) {

  int sum;

  switch (month) {
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
    ;
    break;
  }
  return sum;
}
