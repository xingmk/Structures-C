#include <stdio.h>

int main() {
  int red, white, black, num = 0;
  for (red = 0; red <= 3; red++) {           //红色
    for (white = 0; white <= 3; white++) {   //白色
      for (black = 0; black <= 6; black++) { //黑色
        if (red + white + black == 8) {      //完成条件
          printf("这是第%d次,red=%d,white=%d,black=%d\n", ++num, red, white,
                 black);
        }
      }
    }
  }
  return 0;
}
