//8. Mathematical Operations using Function Overloading

#include <iostream>
using namespace std;

class MathOperations {
public:
    int operate(int a, int b) {
        return a + b;  // Addition
    }

    int operate(int a, int b, char op) {
        if (op == '-') return a - b;  // Subtraction
        else if (op == '*') return a * b;  // Multiplication
        else if (op == '/') return a / b;  // Division
        return 0;
    }
};

int main() {
    MathOperations math;
    cout << "Addition: " << math.operate(10, 5) << endl;
    cout << "Subtraction: " << math.operate(10, 5, '-') << endl;
    cout << "Multiplication: " << math.operate(10, 5, '*') << endl;
    cout << "Division: " << math.operate(10, 5, '/') << endl;
    return 0;
}

