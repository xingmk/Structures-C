#include <stdio.h>

int Year(int year);             //该年的天数
int Mouth(int mouth, int year); //每个月的天数

int daysum(int year, int mouth, int day) //总天数
{
  int sum = 0;
  for (int i = 1990; i < year; i++) {
    sum += Year(year);
  }
  for (int i = 1; i < mouth; i++) {
    sum += Mouth(mouth, year);
  }

  return sum + day;
}
int Mouth(int mouth, int year) //每个月的天数
{
  switch (mouth) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    return 31;
  case 2:
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      return 29;
    return 28;
  default:
    return 30;
  }
}

int Year(int year) //该年的天数
{
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    return 366;
  return 365;
}

void PanDuan(daysum) //判断打鱼还是晒网
{
  switch (daysum % 5) {
  case 1:
  case 2:
  case 3:
    printf("打鱼");
    break;

  default:
    printf("晒网");
    break;
  }
}
int main() {
  int year, mouth, day;
  scanf("%d,%d,%d", &year, &mouth, &day);
  while (1) {
    if (year < 1990) {
      printf("ERROR"); //语法错误
      return 0;
    }
    int sum = daysum(year, mouth, day);
    PanDuan(sum);
    scanf("%d,%d,%d", &year, &mouth, &day);
  }

  return 0;
}
