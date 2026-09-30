#include <bits/stdc++.h>
using namespace std;

class ServiceRecord {
private:
    string serviceName;
    float serviceCost;

public:
    void read() {
        cout << "Enter Service Name: ";
        cin >> serviceName;

        cout << "Enter Service Cost: ";
        cin >> serviceCost;
    }

    void display() {
        cout << "Service: " << serviceName
             << " | Cost: Rs. " << serviceCost << endl;
    }

    float getCost() {
        return serviceCost;
    }
};

class Vehicle {
private:
    string vehicleNumber;
    string ownerName;
    int serviceCount;
    ServiceRecord *services;

public:
    Vehicle(int count) {
        serviceCount = count;
        services = new ServiceRecord[serviceCount];
    }

    void read() {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNumber;
        cout << "Enter Owner Name: ";
        cin >> ownerName;
        for (int i = 0; i < serviceCount; i++) {
            cout << "\nEnter details of Service " << i + 1 << ":\n";
            services[i].read();
        }
    }

    void display() {
        cout << "\n===== Vehicle Details =====\n";
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Owner Name: " << ownerName << endl;

        cout << "\n===== Service Records =====\n";

        float totalBill = 0;

        for (int i = 0; i < serviceCount; i++) {
            cout << "Service " << i + 1 << ": ";
            services[i].display();
            totalBill += services[i].getCost();
        }
        cout << "\nTotal Service Bill: Rs. " << totalBill << endl;
    }

    ~Vehicle() {
        delete[] services;
        cout << "\nService records memory released." << endl;
    }
};

int main() {
    int count;
    cout << "Enter number of services: ";
    cin >> count;
    Vehicle *vehicle = new Vehicle(count);
    vehicle->read();
    vehicle->display();
    delete vehicle;
    return 0;
}