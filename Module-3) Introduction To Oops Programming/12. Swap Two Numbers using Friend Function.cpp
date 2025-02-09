//12. Swap Two Numbers using Friend Function

#include <iostream>
using namespace std;

class Swap {
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    friend void swap(Swap &);
    void display() { cout << "a = " << a << ", b = " << b << endl; }
};

void swap(Swap &s) {
    s.a = s.a + s.b;
    s.b = s.a - s.b;
    s.a = s.a - s.b;
}

int main() {
    Swap s;
    s.setData(10, 20);
    cout << "Before Swap: ";
    s.display();
    swap(s);
    cout << "After Swap: ";
    s.display();
    return 0;
}

