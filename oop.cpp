#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
private:
    string Name, Company;
    int Age = 0;
protected:
    string getName(void) {
        return Name;
    }
    string getCompany(void) {
        return Company;
    }
    int getAge(void) {
        return Age;
    }
public:
    void setName() {
        cout << "Enter Name: ";
        getline(cin, Name);
        cout << endl;

    }
    void setCompany() {
        cout << "Enter Company: ";
        getline(cin, Company);

    }
    void setAge() {
        cout << "Enter Age: ";
        cin >> Age;
        cout << endl;
    }
    void intro() {
        cout << "Name: " << getName() << endl;
        cout << "Company: " << getCompany() << endl;
        cout << "Age: " << getAge() << endl;
        cout << endl;
    }
};  

int main(void) {
    int n;
    cout << "Enter Number Of Employees: ";
    cin >> n;
    vector<Employee> employee(n);
    for (int i = 0; i < n; i++) {
        employee[i].setName();
        employee[i].setCompany();
        employee[i].setAge();
    }
    system("cls");
    for (int i = 0; i < n; i++) {
        employee[i].intro();
    }
}