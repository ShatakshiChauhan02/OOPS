// 1. University Course Registration System
// Create a class Student containing rollNo, name, and CGPA. Provide overloaded constructors to create a student either with only rollNo and name, or with all three details. Create an instance method updateCGPA(double cgpa) that uses the this pointer to distinguish between the data member and parameter. Inside Student, create a nested class Address containing city and state, and provide a method to display the student's address. In main(), create an array of at least 5 Student objects, initialize them using different constructors, update selected students' CGPA, and display complete information.
// Concepts Covered: Constructor Overloading, Nested Class, Array of Objects, this Pointer

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    double cgpa;

public:
    Student(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;
        this->cgpa = 0.0;
    }

    Student(int rollNo, string name, double cgpa) {
        this->rollNo = rollNo;
        this->name = name;
        this->cgpa = cgpa;
    }

    class Address {
    private:
        string city;
        string state;

    public:
        Address(string city, string state) {
            this->city = city;
            this->state = state;
        }

        void displayAddress() {
            cout << "Address: " << city << ", " << state << endl;
        }
    };

    void updateCGPA(double cgpa) {
        this->cgpa = cgpa;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student students[5] = {
        Student(101, "Srishti"),
        Student(102, "Rahul", 8.5),
        Student(103, "Ananya"),
        Student(104, "Aman", 9.1),
        Student(105, "Priya")
    };

    students[0].updateCGPA(8.7);
    students[2].updateCGPA(8.9);
    students[4].updateCGPA(9.2);

    cout << "===== STUDENT INFORMATION =====\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << endl;
        students[i].display();

        Student::Address address("Ghaziabad", "Uttar Pradesh");
        address.displayAddress();

        cout << "-----------------------------\n";
    }

    return 0;
}