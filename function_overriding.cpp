#include <iostream>
using namespace std;

class Base {
public:
    virtual void sum(int a, int b, int c) {  
        int result = a + b + c;
        cout << "Base class sum: " << result << endl;
    }
};

class Derived : public Base {
public:
    void sum(int a, int b, int c) override {
        int result = a + b + c;
        cout << "Derived class sum: " << result << endl;
    }

    void displayBaseSum(int a, int b, int c) {
        Base::sum(a, b, c); 
    }
};

int main() {
    Derived derivedObj;

    derivedObj.sum(3, 5, 7);
    derivedObj.displayBaseSum(3, 5, 7);

    return 0;
}
