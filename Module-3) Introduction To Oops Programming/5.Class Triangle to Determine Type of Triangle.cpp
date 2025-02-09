//5.Class Triangle to Determine Type of Triangle

#include <iostream>
using namespace std;

class Triangle {
private:
    double a, b, c;

public:
    Triangle(double x, double y, double z) : a(x), b(y), c(z) {}

    void determineType() {
        if (a == b && b == c)
            cout << "Equilateral Triangle" << endl;
        else if (a == b || b == c || a == c)
            cout << "Isosceles Triangle" << endl;
        else
            cout << "Scalene Triangle" << endl;
    }
};

int main() {
    Triangle t(3, 3, 3);
    t.determineType();

    return 0;
}

