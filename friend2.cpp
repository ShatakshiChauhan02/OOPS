#include <iostream>
using namespace std;

class Student {
private:
    int r, m;

public:
    Student(int x, int y) {
        r = x;
        m = y;
    }

    friend class Teacher;
};

class Teacher {
public:
    void checkResult(Student s) {
        cout << "Student " << s.r << ": ";

        if (s.m >= 40)
            cout << "Pass";
        else
            cout << "Fail";
    }
};

int main() {
    Student s(101, 72);

    Teacher t;
    t.checkResult(s);

    return 0;
}