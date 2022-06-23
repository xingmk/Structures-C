#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int color;
  for (color = 0; color < 8; color++) {
    textbackground(color);
  }

  return 0;
}
