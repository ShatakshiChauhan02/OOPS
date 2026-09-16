#include <iostream>
using namespace std;

class Number {
    int n;

public:
    void get() {
        cin >> n;
    }

    Number add(Number x) {
        Number temp;
        temp.n = n + x.n;
        return temp;
    }

    void show() {
        cout << n;
    }
};

int main() {
    Number a, b, c;

    cout << "Enter two numbers: ";
    a.get();
    b.get();

    c = a.add(b);

    cout << "Sum = ";
    c.show();

    return 0;
}
