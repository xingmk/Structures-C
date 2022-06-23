#include <stdio.h>

int main() {
  int s;
  scanf("%d", &s);

  if (s >= 90 && s <= 100) {
    printf("优秀\n");
  } else if (s >= 80 && s <= 89) {
    printf("良好\n");
  } else if (s >= 60 && s <= 79) {
    printf("中等\n");
  } else if (s >= 0 && s <= 59) {
    printf("不及格\n");
  }
  return 0;
}
