#include <iostream>

using namespace std;

class employee {
public:
    string Name, Company;
    int Age;

    void intro() {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
        cout << endl;
    }
public:
    employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};  

int main(void) {
    employee mubi = employee("mubashir", "none", 20);
    mubi.intro();

    employee employee2 = employee("Lassi", "Lassi Wala", 0);
    employee2.intro();
}