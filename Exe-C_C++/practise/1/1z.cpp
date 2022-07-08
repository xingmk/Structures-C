#include <iostream>
using namespace std;

int fish(int n, int x) // 分鱼递归函数
{
    if ((x - 1) % 5 == 0) {
        if (n == 1) {
            return 1; // 递归出口
        } else
            fish(n - 1, (x - 1) / 5 * 4); // 递归调用
    }
    return 0;
}

int main(int argc, char* argv[])
{

    int fish[6], i;
    fish[5] = 6;
    while (1) {
        for (int i = 4; i > 0; i--) {
            if (fish[i + 1] % 4 != 0) {
                break;
            }
            fish[i] = fish[i + 1] * 5 / 4 + 1;
            if (fish[i] % 5 != 1) {
                break;
            }
            if (i == 0) {
                break;
            }
        }
        if (i == 0) {
            break;
        }
        fish[5] += 5;
    }
    for (i = 1; i < 5; i++) {
        cout << "fish" << i << fish[i] << endl;
    }
    return 0;
}
