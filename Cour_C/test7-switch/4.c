#include <stdio.h>

int main()

{
  int n;
  printf("enter a num (from 0 to 6):\n");
  scanf("%d", &n);

  switch (n) {
  case 0:
    printf("Sunday\n");
    break;
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thrursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  default:
    printf("Error\n");
  }

  return 0;
}
