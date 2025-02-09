//4. C++ Program: Class for Circle

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) {
        radius = r;
    }

    // Member function to calculate area
    double area() {
        return 3.14159 * radius * radius;
    }

    // Member function to calculate circumference
    double circumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    double r;
    cout << "Enter radius of the circle: ";
    cin >> r;

    Circle circle(r);

    cout << "Area of Circle: " << circle.area() << endl;
    cout << "Circumference of Circle: " << circle.circumference() << endl;

    return 0;
}

