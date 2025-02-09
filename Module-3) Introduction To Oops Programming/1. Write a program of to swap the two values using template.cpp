//1. Write a program of to swap the two values using template

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After Swap: x = " << x << ", y = " << y << endl;

    float p = 1.5, q = 2.5;
    cout << "Before Swap: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After Swap: p = " << p << ", q = " << q << endl;

    return 0;
}

