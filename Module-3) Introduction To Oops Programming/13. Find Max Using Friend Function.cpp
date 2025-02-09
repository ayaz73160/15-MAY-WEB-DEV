//13. Find Max Using Friend Function

#include <iostream>
using namespace std;

class Compare {
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    friend int max(Compare &);
};

int max(Compare &c) {
    return (c.a > c.b) ? c.a : c.b;
}

int main() {
    Compare c;
    c.setData(15, 20);
    cout << "Max value: " << max(c) << endl;
    return 0;
}

