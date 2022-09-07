#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

    int arr[9] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
    // cout << "排序前：" << endl;
    //
    // for (int i = 0; i < 9; i++) {
    //     cout << arr[i] << "\t";
    // }
    //
    // 总共排序轮数为 元素个数 -1
    for (int i = 0; i < 9 - 1; i++) {
        // 内层循环对比 次数= 元素个数 - 当前轮数 - 1
        for (int k = 0; k < 9 - i - 1; k++) {
            // 如果第一个数大于第二个数 那么就交换
            if (arr[k] > arr[k + 1]) {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << "\t";
    }
    return 0;
}
