#include <iostream>
using namespace std;

int funs(char* s)
{
    char t[80];
    int i, j;
    // 将s拷贝至t
    for (i = 0; s[i]; i++) {
        t[i] = s[i];
    }
    t[i] = '\0'; //在t的结尾添加结束符

    // 循环t
    for (i = 0, j = 0; t[i]; i++) {
        // 如果是数字 那么输入$ 在输入数字
        if (t[i] >= '0' && t[i] <= '9') {
            s[j++] = '$';
            s[j++] = t[i];
        }
        // 如果是非数字 则原样输入
        else {
            s[j++] = t[i];
        }
    }

    return 0;
}

int main(int argc, char* argv[])
{
    char s[80];
    cout << "enter a pair of string" << endl;
    cin >> s;
    funs(s);
    cout << "the result of s is " << s << endl;

    return 0;
}
