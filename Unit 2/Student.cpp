#include <iostream>
using namespace std;

class StudentResult;

class ResultAnalyzer {
public:
    void analyzeResult(const StudentResult &s);
};

class StudentResult {
private:
    int rollNo;
    string name;
    float marks[3];

    static int totalStudents;

public:
    StudentResult(int r, string n, float m1, float m2, float m3) {
        rollNo = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        totalStudents++;
    }

    friend class ResultAnalyzer;

    static void showTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }

    ~StudentResult() {
        cout << "StudentResult object for " << name << " is destroyed." << endl;
    }
};

int StudentResult::totalStudents = 0;

void ResultAnalyzer::analyzeResult(const StudentResult &s) {
    float total = s.marks[0] + s.marks[1] + s.marks[2];
    float percentage = total / 3;

    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (s.marks[0] >= 33 && s.marks[1] >= 33 && s.marks[2] >= 33)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;
}

int main() {
    StudentResult s1(101, "Srishti", 85, 78, 92);
    StudentResult s2(102, "Rahul", 65, 72, 80);

    ResultAnalyzer analyzer;

    cout << "Student 1 Result:" << endl;
    analyzer.analyzeResult(s1);

    cout << "\nStudent 2 Result:" << endl;
    analyzer.analyzeResult(s2);

    cout << endl;
    StudentResult::showTotalStudents();

    return 0;
}