#include <stdio.h>
#include <string.h>

#define MAX 100

int seek_s(char ch, char *s) { //查询字符串
  int num = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == ch) {
      num++;
    }
  }
  return num;
}

void replace_s(char ch, char re, char *s) { //替换字符串
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == ch) {
      s[i] = re;
    }
  }
}

void insert_s(char new, int n, char *s) { //插入字符串
  int i;
  for (i = strlen(s); i > n; i--) {
    s[i] = s[i - 1];
  }
  s[i] = new;
}

void delete_s(char ch, char *s) { //删除字符串
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == ch) {
      int j;
      for (j = i; j < strlen(s); j++)
        s[j] = s[j + 1];
      s[j] = '\0';
    }
  }
}
int main() {
  char s[MAX] = "ababcabcd"; //字符串s
  int n = 1;
  while (n < 5 && n > 0) {
    scanf("%d", &n);
    switch (n) {
    case 1: {
      printf("start!\n");
      char x, y;
      scanf("%c%c", &y, &x);
      int t = seek_s(x, s);
      printf("%d\n", t);
    } break;
    case 2: {
      printf("start!!\n");
      char x, y, z;
      scanf("%c%c %c", &x, &y, &z);
      replace_s(y, z, s);
    } break;
    case 3: {
      char x, y;
      int num;
      scanf("%c%c%d", &x, &y, &num);
      insert_s(y, num, s);
    } break;
    case 4: {
      char x, y;
      scanf("%c%c", &x, &y);
      delete_s(y, s);
    } break;
    }
    puts(s);
  }
  return 0;
}
