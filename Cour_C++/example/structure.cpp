#include <iostream>
#include <string>
using namespace std;

struct Hero {
    string name;
    int age;
    string sex;
};

void bubbleSort(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (heroArray[j].age > heroArray[j + 1].age) {
                struct Hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }
        }
    }
}

void printHero(struct Hero heroArray[], int len){
    for( int i = 0; i < len; i++ ){
        
        cout << "xingming" << heroArray[i].name<< endl;
    }
}
int main(int argc, char* argv[])
{

    struct Hero heroArray[5] = {
        { "liubei", 23, "man" },
        { "guanyu", 22, "man" },
        { "zhangfei", 20, "man" },
        { "zhaoyun", 21, "man" },
        { "diaochan", 19, "nv" },
    };
    int len = sizeof(heroArray) / sizeof(heroArray[0]);

    printHero(heroArray, len);
    for (int i = 0; i < len; i++) {

        cout << "xingming:" << heroArray[i].name << endl;
    }

    return 0;
}
