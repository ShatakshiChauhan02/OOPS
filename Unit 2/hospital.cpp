#include <iostream>
using namespace std;

class Patient {
private:
    int patientId;
    string patientName;
    static int activePatients;

public:
    Patient(int id, string name) {
        patientId = id;
        patientName = name;
        activePatients++;
    }

    ~Patient() {
        activePatients--;
    }

    static void showActivePatients() {
        cout << "Active Patients: " << activePatients << endl;
    }
};

int Patient::activePatients = 0;

int main() {
    Patient p1(101, "Srishti");
    Patient p2(102, "Rahul");

    Patient::showActivePatients();

    {
        Patient p3(103, "Ananya");
        Patient::showActivePatients();
    }

    Patient::showActivePatients();

    return 0;
}