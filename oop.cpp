#include <iostream>

using namespace std;

class employee {
public:
    string name, company;
    int age;

    void intro() {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
        cout << endl;
    }
};  

int main(void) {
    employee mubi;
    mubi.name = "Mubashir";
    mubi.age = 20;
    mubi.company = "None";
    mubi.intro();

    employee employee2;
    employee2.name = "Lassi";
    employee2.age = 0;
    employee2.company = "Lassi Wala";
    employee2.intro();

}