#include <iostream>
using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    double salary;

public:
    Employee() {
        employeeId = 0;
        name = "Unknown";
        salary = 0;
    }

    Employee(int id, string n, double s) {
        employeeId = id;
        name = n;
        salary = s;
    }

    Employee(const Employee &e) {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    void display() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    void updateSalary(double newSalary) {
        salary = newSalary;
    }
};

int main() {
    const Employee e1(101, "Srishti", 50000);
    cout << "Const Employee Object:" << endl;
    e1.display();
    Employee e2(e1);
    cout << "\nCopied Employee Object:" << endl;
    e2.display();
    e2.updateSalary(60000);
    cout << "\nAfter Salary Update:" << endl;
    e2.display();

    return 0;
}