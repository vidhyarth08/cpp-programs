#include <iostream>
using namespace std;

class Sum {
public:
    Sum(int a, int b) {
        cout << "Sum of two integers: " << a + b << endl;
    }

    Sum(float a, float b) {
        cout << "Sum of two floats: " << a + b << endl;
    }

    Sum(char a, char b) {
        cout << "Concatenation of two characters: " << a << b << endl;
    }
};

int main() {
    Sum sum1(10, 20);

    Sum sum2(1.5f, 2.3f);

    Sum sum3('A', 'B');

    return 0;
}
