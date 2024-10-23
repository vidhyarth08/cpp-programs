#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of Class A" << endl;
    }

    void showA() {
        cout << "Class A function" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of Class B" << endl;
    }

    void showB() {
        cout << "Class B function" << endl;
    }
};

class C : public A {
public:
    C() {
        cout << "Constructor of Class C" << endl;
    }

    void showC() {
        cout << "Class C function" << endl;
    }
};

class D : public A {
public:
    D() {
        cout << "Constructor of Class D" << endl;
    }

    void showD() {
        cout << "Class D function" << endl;
    }
};

class E : public B {
public:
    E() {
        cout << "Constructor of Class E" << endl;
    }

    void showE() {
        cout << "Class E function" << endl;
    }
};

int main() {
    E objE;

    objE.showA(); 
    objE.showB(); 
    objE.showE(); 

    return 0;
}
