#include <iostream>
using namespace std;

class Sum{
    int n, sum;
    
public:
    Sum() {
        n = 0;
        sum = 0;
    }
    
    void calculateSum() {
        cout << "Enter a number: ";
        cin >> n;
        
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
    }
    
    void displaySum() {
        cout << "The sum of the first " << n << " numbers is: " << sum << endl;
    }
};

int main() {
    Sum obj;
    
    obj.calculateSum();
    obj.displaySum();
    
    return 0;
}
