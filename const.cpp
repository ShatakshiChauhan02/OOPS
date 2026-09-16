#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:

    Student(string n, int m) {
        name = n;
        marks = m;
        cout << "Parameterized Constructor" << endl;
    }

    Student(){
        cout<<"Default Constructor"<<endl;
    }

    Student(const Student &s) {
        name = s.name;
        marks = s.marks;
        cout << "Copy Constructor" << endl;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {


    Student s1("Shaun", 90);

    Student s2 = s1;

    cout << "\nStudent 1:" << endl;
    s1.show();

    cout << "\nStudent 2:" << endl;
    s2.show();

    return 0;
}
