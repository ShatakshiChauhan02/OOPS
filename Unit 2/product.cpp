#include <iostream>
using namespace std;
class Product {
private:
    int productId;
    string name;
    double price;

public:
    Product(int id, string n, double p) {
        productId = id;
        name = n;
        price = p;
    }
    Product cmpPrice(const Product &p) {
        if (price > p.price)
            return *this;
        else
            return p;
    }
   
    void display() {
        cout << "Product ID: " << productId << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p1(101, "Laptop", 55000);
    Product p2(102, "Smartphone", 40000);
    Product higher = p1.cmpPrice(p2);
    cout << "Product with Higher Price:" << endl;
    higher.display();
    return 0;
}