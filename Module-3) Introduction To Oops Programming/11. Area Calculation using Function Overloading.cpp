//11. Area Calculation using Function Overloading

#include <iostream>
using namespace std;

class AreaCalculator {
public:
    float area(float length, float breadth) {
        return length * breadth;  // Rectangle
    }

    float area(float base, float height, char type) {
        return 0.5 * base * height;  // Triangle
    }

    float area(float radius) {
        return 3.14159 * radius * radius;  // Circle
    }
};

int main() {
    AreaCalculator calc;
    cout << "Rectangle Area: " << calc.area(5.0, 10.0) << endl;
    cout << "Triangle Area: " << calc.area(5.0, 12.0, 'T') << endl;
    cout << "Circle Area: " << calc.area(7.0) << endl;
    return 0;
}

