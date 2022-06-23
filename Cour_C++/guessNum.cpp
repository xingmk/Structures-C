#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char* argv[])
{

    // 添加随机数的种子
    srand((unsigned int)time(NULL));
    // 1 ~ 100 随机数
    int num = rand() % 100 + 1;
    int val;
    cin >> val;

    while (1) {

        if (val > num) {

            cout << "you guess bigger" << endl;
        }

        else if (val < num) {

            cout << "you guess smaller" << endl;
        } else {

            cout << "congration to you" << endl;
            break;
        }
    }
    return 0;
}
