#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {

    int x,ge,shi,bai,qian,wan;
    cout << "enter a num";

    cin >> x;

    ge = x % 10;
    shi = x % 100 / 10; 
    bai = x % 1000 / 100;
    qian = x / 1000 % 10; 
    wan = x / 10000;

    if( ge == wan && shi == qian ){
        cout <<x<< "is huiwen";
    }else{
        cout << "%dthis isn't huiwen"<<x;

    }

    return 0;
}

