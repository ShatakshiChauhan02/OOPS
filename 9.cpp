#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void read() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    float getMarks() {
        return marks;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic array of Student objects
    Student *students = new Student[n];

    // Input student records
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        students[i].read();
    }

    // Display all student records
    cout << "\n===== Student Records =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].display();
    }

    Student *highest = &students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].getMarks() > highest->getMarks()) {
            highest = &students[i];
        }
    }

    cout << "\n===== Student with Highest Marks =====\n";
    highest->display();

    delete[] students;

    return 0;
}