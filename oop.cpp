#include <iostream>

using namespace std;

class employee {
private:
    string Name, Company;
    int Age;

public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name; 
    }
    void setName(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setName(int age) {
        Age = age;
    }
    int getAge() {
        return Age;
    }
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