//9. 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class Matrix {
    int arr[5];

public:
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) cin >> arr[i];
    }

    Matrix operator+(Matrix &m) {
        Matrix result;
        for (int i = 0; i < 5; i++) result.arr[i] = arr[i] + m.arr[i];
        return result;
    }

    void display() {
        for (int i = 0; i < 5; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, result;
    m1.input();
    m2.input();
    result = m1 + m2;
    cout << "Resultant Matrix: ";
    result.display();
    return 0;
}

