//5. C++ Program: Class for Rectangle

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Member function to calculate area
    double area() {
        return length * width;
    }

    // Member function to calculate perimeter
    double perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double l, w;
    cout << "Enter length of the rectangle: ";
    cin >> l;
    cout << "Enter width of the rectangle: ";
    cin >> w;

    Rectangle rect(l, w);

    cout << "Area of Rectangle: " << rect.area() << endl;
    cout << "Perimeter of Rectangle: " << rect.perimeter() << endl;

    return 0;
}

