/*
 * 题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。*/

#include <stdio.h>
#include <stdlib.h>

#define N 1000

int main(int argc, char *argv[]) {
  // 1--1000
  int a[] = {};
  for (int i = 2; i <= N; i++) {
    int sum, k;
    sum = a[0] = 1;
    // Check out InZi
    for (int j = 2; j <= (i / 2); j++) {
      if (i % j == 0) {
        sum += j;
        a[++k] = j;
      }
    }
    int n;
    // Search WanShu
    if (i == sum) {
      printf("%d=%d", i, a[0]);
      for (n = 1; n <= k; n++) {
        printf("+%d", a[n]);
      }
      printf("\n");
    }
  }
  return 0;
}
