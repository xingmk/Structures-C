#include <stdio.h>

int main()

{
  int i, sum = 0;
  while (i < 100) {

    if (i % 5 == 0 && i % 7 != 0) {
      sum++;
      printf("%d\n", i);
    }
    i++;
  }
  printf("能被5整除但不能被7整除的数有%d个", sum);
  return 0;
}
