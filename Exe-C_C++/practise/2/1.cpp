#include <iostream>
using namespace std;

int age(int n)
{
    int x;
    if (n == 1) {
        x = 10;
    } else {
        x = age(n - 1) + 2;
    }
    return x;
}
int main(int argc, char* argv[])
{
    int n;
    cout << "enter the values of n" << endl;
    cin >> n;
    cout << "第" << n << "个人的年龄为" << age(n) << endl;
    return 0;
}
