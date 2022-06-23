#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char letter;
  printf("enter the first letter of someday\n");

  while ((letter = getchar() != 'Y')) {
    switch (letter) {
    case 'S':
      printf("please input the secound letter\n");
      if ((letter = getchar() == 'a')) {
        printf("saturday\n");
      } else if ((letter = getchar() == 'u')) {
        printf("sunday\n");
        break;
      }
    case 'F':
      printf("friday\n");
      break;
    case 'M':
      printf("monday\n");
      break;
    case 'T':
      printf("please input the secound letter");
      if ((letter = getchar() == 'u')) {
        printf("tuesday\n");
      } else if ((letter = getchar() == 'h')) {
        printf("thursday\n");
      } else {
        printf("data error\n");
      }
      break;
    case 'W':
      printf("wednesday\n");
      break;
    default: {
      printf("data error\n");
    }
    }
  }

  return 0;
}
