#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

    int arr[5] = { 1, 2, 3, 4, 5 };

    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    while (start < end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    for ( int j = 0; j < 5; j++ ){
        cout << arr[j]<<"\t";
    }
    return 0;
}
