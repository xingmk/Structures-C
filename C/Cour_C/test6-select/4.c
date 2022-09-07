#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int score;
  printf("enter a value to grade\n");
  scanf("%d", &score);

  if (score >= 0 && score <= 59) {
    printf("failed\n");
  } else if (score >= 60 && score <= 79) {
    printf("middle\n");
  } else if (score >= 80 && score <= 89) {
    printf("good\n");
  } else if (score >= 90 && score <= 100) {
    printf("great\n");
  }

  return 0;
}
