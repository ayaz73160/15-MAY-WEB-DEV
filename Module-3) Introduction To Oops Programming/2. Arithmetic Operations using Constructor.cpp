//2. Program: Arithmetic Operations using Constructor

#include <iostream>
using namespace std;

class Calculator {
private:
    int a, b;

public:
    // Constructor to initialize values
    Calculator(int x, int y) {
        a = x;
        b = y;
    }

    void add() { cout << "Addition: " << a + b << endl; }
    void subtract() { cout << "Subtraction: " << a - b << endl; }
    void multiply() { cout << "Multiplication: " << a * b << endl; }
    void divide() { 
        if (b != 0) 
            cout << "Division: " << (float)a / b << endl; 
        else 
            cout << "Error: Division by zero!" << endl;
    }
};

int main() {
    Calculator calc(10, 5);
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();

    return 0;
}

