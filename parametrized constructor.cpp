#include <iostream>
using namespace std;

class Swap {
    int a, b;

public:
    Swap(int x, int y) {
        a = x;
        b = y;
    }

    void swap() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Swap obj(10, 20);

    cout << "Before swapping: ";
    obj.display();

    obj.swap();

    cout << "After swapping: ";
    obj.display();

    return 0;
}
