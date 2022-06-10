#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char i, j, k;
  for (i = 'x'; i <= 'z'; i++) {
    for (j = 'x'; j <= 'z'; j++) {
      if (i != j) {
        for (k = 'x'; k <= 'z'; k++)

          if (i != k && k != 'x' && k != 'z') {
            printf("order is a --%c\t b--%c \tc--%c\n", i, j, k);
          }
      }
    }

    return 0;
  }
}
