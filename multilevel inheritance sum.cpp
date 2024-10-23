#include <iostream>
using namespace std;

class Base1 {
protected:
    int num1;

public:
    Base1(int a) {
        num1 = a;
    }
};

class Base2 {
protected:
    int num2;

public:
    Base2(int b) {
        num2 = b;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived(int a, int b) : Base1(a), Base2(b) {}

    void displaySum() {
        cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
    }
};

int main() {
    Derived obj(10, 20);

    obj.displaySum();

    return 0;
}
