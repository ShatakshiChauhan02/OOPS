#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;
    static int count;

public:

    Student(string n, int m) {
        name = n;
        marks = m;
        count++;
    }

    static void showCount() {
        cout << "Total Students: " << count << endl;
    }

    friend void showMarks(Student s);
};

int Student::count = 0;

void showMarks(Student s) {
    cout << "Student Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {

    Student s1("Shaun", 90);
    Student s2("Riya", 85);
    Student s3("Siya", 95);

    Student::showCount();

    
    cout << "\nStudent Details:" << endl;

    showMarks(s1);
    showMarks(s2);
    showMarks(s3);

    return 0;
}
