//1. Program: Multiplication and Cubic Values using Inline Function

#include <iostream>
using namespace std;

class MathOperations {
public:
    inline int multiply(int a, int b) {
        return a * b;
    }

    inline int cubic(int n) {
        return n * n * n;
    }
};

int main() {
    MathOperations math;
    int a, b, n;

    cout << "Enter two numbers for multiplication: ";
    cin >> a >> b;
    cout << "Multiplication: " << math.multiply(a, b) << endl;

    cout << "Enter a number to find its cubic value: ";
    cin >> n;
    cout << "Cubic value: " << math.cubic(n) << endl;

    return 0;
}

