#include <stdio.h>
int main() {
  int n, i, d = 6, t = 10;

  for (i = 0; i < 3; i++) { //三次机会

    printf("put number (1--10) "); //猜想范围在一到十之间
    scanf("%d", &n);
    if (n > t) { //猜想超出猜测范围

      printf("Error !");
      continue;
    }
    if (n < d) { //所猜想数字小了

      printf("smaller ");
    } else if (n > d) { //所猜想数字大了

      printf("bigger ");
    } else if (n == d) { //所猜想数字正好

      printf(" great!");
      break;
    }
  }

  printf("theree times have done and the proper number is : %d",
         d); //若没有猜出，则告诉正确答案
  return 0;
}
