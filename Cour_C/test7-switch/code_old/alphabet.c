#include <stdio.h>

int main()

{
  char n;
  printf("请输入有效字母a到e中的一个");
  scanf("%c", &n);
  switch (n)

  {
  case 'a':
    printf("90分以上");
    break;
  case 'b':
    printf("80到90分");
    break;
  case 'c':
    printf("70到80分");
    break;
  case 'd':
    printf("60到70分");
    break;
  case 'e':
    printf("60分以下");
    break;

  default:
    printf("Error\n");
  }
}
