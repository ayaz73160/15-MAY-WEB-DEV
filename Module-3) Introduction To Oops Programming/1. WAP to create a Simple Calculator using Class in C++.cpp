//1. WAP to create a Simple Calculator using Class in C++

#include <iostream>
using namespace std;

class Calculator {
public:
    // Member functions for basic operations
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    float divide(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << calc.add(a, b) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(a, b) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(a, b) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(a, b) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}

