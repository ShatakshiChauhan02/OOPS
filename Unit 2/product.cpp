#include <iostream>
using namespace std;

class Product {
private:
    int productId;
    string name;
    double price;

public:
    // Parameterized constructor
    Product(int id, string n, double p) {
        productId = id;
        name = n;
        price = p;
    }