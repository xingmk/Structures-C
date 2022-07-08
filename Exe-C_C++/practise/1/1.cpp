#include <iostream>
using namespace std;

int fish(int n, int x) //判断捕鱼数
{
    if ((x - 1) % 5 == 0) {
        if (n == 1) {
            return 1; /*递归出口*/
        } else
            return fish(n - 1, (x - 1) / 5 * 4); /*递归调用*/
    }
    return 0; /*x不是符合题意的解，返回0*/
}

int main(int argc, char* argv[])
{

    int i = 0, flag = 0, x;
    do {
        i = i + 1;
        x = i * 5 + 1; /*x最小值为6，以后每次增加5*/
        if (fish(5, x)) {
            flag = 1;
            cout << "捕鱼总数" << x << endl;
        }
    } while (!flag); /*未找到符合题意的x，继续循环，否则退出循环*/

    return 0;
}
