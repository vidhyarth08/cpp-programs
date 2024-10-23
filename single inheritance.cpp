#include <iostream>
using namespace std;

class Base {
protected:
    int num1, num2;

public:
    Base(int a, int b) {
        num1 = a;
        num2 = b;
    }
};

class Derived : public Base {
public:
    Derived(int a, int b) : Base(a, b) {}

    void displayProduct() {
        cout << "Product of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
    }
};

int main() {
    Derived obj(10, 20);

    obj.displayProduct();

    return 0;
}
