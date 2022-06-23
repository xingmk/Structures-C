#include <stdio.h>

int main() {
  int i;
  for (i = 300; i >= 1; i--) {
    if (i % 5 == 0 && i % 17 == 0) {
      printf("%d\t", i);
      continue;
    }
  }
  return 0;
}
