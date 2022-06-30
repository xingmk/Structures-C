#include <iostream>
#include <string>
using namespace std;


class Student
{
public:
    string m_name;
    int m_id;

public:
    void setName(string name){
        m_name = name;
    }
    void setID(int id){
        m_id = id;
    }

    void showStudent(){
        cout << "name:" << m_name << endl;
        cout << "ID:" << m_id << endl;
    }

};


int main(int argc, char *argv[]) {

    Student stu;
    stu.setName("张三");
    stu.setID(1);
    stu.showStudent();

    return 0;
}
