#include <stdio.h>
#include <stdlib.h>

void reverse_string(char *str) {

  if (*(++str) != '\0') {
    reverse_string(str);
  }
  printf("%c", *(str - 1));
}

int main(int argc, char *argv[]) {
  char *ch = "abcdef";
  printf("before:%s\n ", ch);
  printf("after:");
  reverse_string(ch);
  printf("\n");

  return 0;
}
