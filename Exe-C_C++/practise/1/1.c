#include <stdio.h>
#include <stdlib.h>

int fish(int n, int k) { // 对捕鱼总数进行判断
  if ((k - 1) % 5 == 0) {
    if (n == 1) {
      return 1; //递归出口
    } else {
      return fish(n - 1, (k - 1) / 5 * 4); // 递归的调用
    }
  }

  return 0; /*x不是符合题意的解，返回0*/
}

int main(int argc, char *argv[]) {
  int i = 0, flag = 0, x;
  do {
    i = i + 1;
    x = i * 5 + 1; //最小值为6 之后每次增加5
    if (fish(5, x)) {
      flag = 1;
      printf("无人合伙捕鱼的总数为%d\n", x);
    }
  } while (!flag); // 未找到符合题意的x，继续循环，否则退出循环

  return 0;
}
