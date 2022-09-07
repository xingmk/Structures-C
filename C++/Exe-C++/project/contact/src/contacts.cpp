#include <iostream>
#include <string>
using namespace std;

#define Max 1000
// Build menu page
void showMenu()
{

    cout << "******************************" << endl;
    cout << "***** 1. Add     contact *****" << endl;
    cout << "***** 2. Show    contant *****" << endl;
    cout << "***** 3. Delete  contact *****" << endl;
    cout << "***** 4. Search  contact *****" << endl;
    cout << "***** 5. Update  contact *****" << endl;
    cout << "***** 6. Empty   contact *****" << endl;
    cout << "***** 0. Exit    contact *****" << endl;
    cout << "******************************" << endl;
}

// Build person strucute
struct Person {

    // name
    string c_name;
    // sex
    int c_sex;
    // age
    int c_age;
    // number
    string c_phone;
    // live
    string c_addr;
};

struct ContantBooks {
    // save contants
    struct Person personArray[Max];
    // record the num of contants
    int c_Size;
};

void addPerson(ContantBooks* tab)
{
    // to determine whether a directory is full
    if (tab->c_Size == Max) {

        cout << "the ContantBooks is full and you can't add new contant" << endl;
        return;
    } else {
        // add Name
        string name;
        cout << "inseart a name " << endl;
        cin >> name;
        tab->personArray[tab->c_Size].c_name = name;
    }

    // add sex
    cout << "enter your sex" << endl;
    cout << "1-->man" << endl;
    cout << "2-->woman" << endl;

    int sex;
    while (true) {
        cin >> sex;
        if (sex == 1 || sex == 2) {
            tab->personArray[tab->c_Size].c_sex = sex;
            break;
        }
        cout << "Error, please enter again" << endl;
    }

    // add age
    cout << "enter your age please" << endl;
    int age;
    cin >> age;
    tab->personArray[tab->c_Size].c_age = age;

    // add phone_number
    cout << "please enter your phone_number " << endl;
    string phone;
    cin >> phone;
    tab->personArray[tab->c_Size].c_phone = phone;

    // add address
    cout << "input your address please" << endl;
    string addr;
    cin >> addr;
    tab->personArray[tab->c_Size].c_addr = addr;

    // Update ContantBooks
    tab->c_Size++;
    cout << "Add successfully" << endl;
    system("pause"); // press any_key
    system("clear"); // clear the screen
}

void showPerson(ContantBooks* tab)
{
    if (tab->c_Size == 0) {
        cout << "the directory doesn't have anybody " << endl;
    } else {
        for (int i = 0; i < tab->c_Size; i++) {
            cout << "name" << tab->personArray[i].c_name << "\t";
            cout << "sex" << (tab->personArray[i].c_sex == 1 ? "man" : "woman") << "\t";
            cout << "age" << tab->personArray[i].c_age << "\t";
            cout << "phone" << tab->personArray[i].c_phone << "\t";
            cout << "name" << tab->personArray[i].c_name << endl;
        }
        system("pause");
        system("clear");
    }
}

int ifExist(ContantBooks* tab, string name)
{
    int i;
    for (i = 0; i < tab->c_Size; i++) {
        if (tab->personArray[i].c_name == name) {
            return i;
            break;
        } else
            return -1;
    }
    return 0;
}

void deletePerson(ContantBooks* tab)
{
    cout << "enter contact you want to delete" << endl;
    string name;
    cin >> name;

    int ret = ifExist(tab, name);
    if (ret != -1) {
        for (int i = ret; tab->c_Size; i++) {
            tab->personArray[i] = tab->personArray[i + 1];
        }
        cout << "delete successfully" << endl;
    } else {
        cout << "can't find that person" << endl;
    }
}

void searchPerson(ContantBooks* tab)
{

    cout << "enter contact you want to delete" << endl;
    string name;
    cin >> name;

    int ret = ifExist(tab, name);
    if (ret != -1) {
        cout << "name" << tab->personArray[ret].c_name << endl;

    } else {
        cout << "can't find that person" << endl;
    }
}

void UpdatePerson(ContantBooks* tab)
{

    cout << "enter contact you want to delete" << endl;
    string name;
    cin >> name;

    int ret = ifExist(tab, name);
    if (ret != -1) {
        // add name
        string name;
        cout << "inseart a name " << endl;
        cin >> name;
        tab->personArray[ret].c_name = name;

        // add sex
        cout << "enter your sex" << endl;
        cout << "1-->man" << endl;
        cout << "2-->woman" << endl;

        int sex;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                tab->personArray[ret].c_sex = sex;
                break;
            }
            cout << "Error, please enter again" << endl;
        }

        // add age
        cout << "enter your age please" << endl;
        int age;
        cin >> age;
        tab->personArray[ret].c_age = age;

        // add phone_number
        cout << "please enter your phone_number " << endl;
        string phone;
        cin >> phone;
        tab->personArray[ret].c_phone = phone;

        // add address
        cout << "input your address please" << endl;
        string addr;
        cin >> addr;
        tab->personArray[ret].c_addr = addr;
    }
}

void cleanPerson(ContantBooks* tab)
{

    tab->c_Size = 0;
    cout << "have cleaned ContantBooks" << endl;
}

int main(int argc, char* argv[])
{
    // Menu
    showMenu();

    struct ContantBooks tab;

    // Behavior
    while (true) {

        int select;
        cout << "enter your choose" << endl;
        cin >> select;

        switch (select) {

        case 1: // Add
            addPerson(&tab);
            break;
        case 2: // Show
            showPerson(&tab);
            break;
        case 3: // Delete
            deletePerson(&tab);
        case 4: // Search
            searchPerson(&tab);
            break;
        case 5: // Update
            UpdatePerson(&tab);
            break;
        case 6: // Empty
            cleanPerson(&tab);
            break;
        case 0: // Exit
            cout << "Welcome to use next time" << endl;
            return 0;
            break;
        }
    }
    return 0;
}
