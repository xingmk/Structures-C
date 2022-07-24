#include <stdio.h>

int main() {
  int i;
  for (i = 300; i >= 1; i--) {
    if (i % 17 == 0) {
      break;
    }
  }
  printf("%d\t", i);
  return 0;
}
