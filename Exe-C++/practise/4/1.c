#include <stdio.h>
#include <stdlib.h>

int fun(char *s) {
  char t[80];
  int i, j;
  // 将s拷贝给t
  for (i = 0; s[i]; i++) {
    t[i] = s[i];
  }
  t[i] = '\0'; // 添加结束标志

  // 循环t
  for (i = 0, j = 0; t[i]; i++) {
    //将数字写成$
    if (t[i] > '0' && t[i] < '9') {
      s[j++] = '$';
      s[j++] = t[i];
    }
    // 对于非数字的字符保存
    else {
      s[j++] = t[i];
    }
  }
  s[j] = '\0';
  return 0;
}

int main(int argc, char *argv[]) {

  char s[80];
  printf("enter a pair of string\n");
  scanf("%s", s);
  fun(s);
  printf("The result:%s\n", s);

  return 0;
}
