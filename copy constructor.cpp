#include <iostream>
using namespace std;

class ArraySum {
    int* arr;
    int size;

public:
    ArraySum(int a[], int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = a[i];
        }
    }

    ArraySum(const ArraySum& obj) {
        size = obj.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i];
        }
    }

    int calculateSum() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }

    ~ArraySum() {
        delete[] arr;
    }
};

int main() {
    int arr[] = {1, -2, 3, 4, -5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    ArraySum obj1(arr, size);

    ArraySum obj2 = obj1;

    cout << "Sum of positive numbers: " << obj2.calculateSum() << endl;

    return 0;
}
