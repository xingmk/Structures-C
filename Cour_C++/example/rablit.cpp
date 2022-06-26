#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

    long f1, f2;
    int i;
    f1 = f2 = 1;
    for (i = 1; i <= 20; i++) {

        cout << f1 << "\t" << f2;
        if (i % 2 == 0) {
            cout << endl;
        }
        f1 = f1 + f2;
        f2 = f1 + f2;
    }

    return 0;
}
