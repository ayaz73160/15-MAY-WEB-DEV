//2. Area of Rectangle using Inheritance

#include <iostream>
using namespace std;

class Shape {
protected:
    int length, width;
};

class Rectangle : public Shape {
public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 10);
    cout << "Area of Rectangle: " << rect.area() << endl;
    return 0;
}

