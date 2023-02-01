#include <iostream>

using namespace std;

class Employee {
private:
    string Name, Company;
    int Age;

public:
    void setName(string name) {
        Name = name;
    }
    string getName(void) {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany(void) {
        return Company;
    }
    void setAge(int age) {
        Age = age;
    }
    int getAge(void) {
        return Age;
    }
    void intro() {
        cout << "Name: " << getName() << endl;
        cout << "Company: " << getCompany() << endl;
        cout << "Age: " << getAge() << endl;
        cout << endl;
    }
};  

int main(void) {
    Employee employee1;
    employee1.setName("Mubashir");
    employee1.setAge(20);
    employee1.setCompany("None");
    employee1.intro();

    Employee employee2;
    employee2.setAge(15);
    employee2.setName("Lassi Wala");
    employee2.setCompany("Lassi");
    employee2.intro();

    Employee employee3;
    employee3.setName("Talha Wasi");
    employee3.setCompany("None");
    employee3.setAge(16);
    employee3.intro();

    Employee employee4;
    employee4.setName("BHAo Bhao");
    employee4.setCompany("Quack Like A duck");
    employee4.setAge(24);
    employee4.intro();
}