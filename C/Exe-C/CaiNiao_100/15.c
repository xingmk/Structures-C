#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int score;
  char grade;
  printf("Enter the score: ");
  scanf("%d", &score);
  grade = (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C');
  printf("%c\n", grade);

  return 0;
}
