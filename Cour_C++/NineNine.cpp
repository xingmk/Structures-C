#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {

            cout << j << "*" << i << "=" << i * j << "\t";
        }

        cout << endl;
    }

    return 0;
}
