#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int letters = 0, space = 0, digit = 0, others = 0;
  printf("enter some character:\n");

  char c;
  while ((c = getchar()) != '\n') {
    if (c >= 'a' && c <= 'z' || c > 'A' && c <= 'Z') {
      letters++;
    } else if (c == ' ') {
      space++;
    } else if (c >= '0' && c <= '9') {
      digit++;
    } else {
      others++;
    }
  }
  printf("all in all: char=%d space=%d digit=%d others=%d\n", letters, space,
         digit, others);
  return 0;
}
