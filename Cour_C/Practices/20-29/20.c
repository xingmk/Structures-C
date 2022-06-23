#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double sn = 100.0, hn = sn / 2;

  for (int i = 2; i <= 10; i++) {
    sn = sn + 2 * hn;
    hn = hn / 2;
  }
  printf("the total of road is %lf\n", sn);
  printf("the tenth is %lf mete\n", hn);

  return 0;
}
