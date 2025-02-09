//10. String Concatenation using Operator Overloading

#include <iostream>
#include <string>
using namespace std;

class Concatenate {
    string str;

public:
    void setString(string s) { str = s; }

    Concatenate operator+(Concatenate &s) {
        Concatenate temp;
        temp.str = str + s.str;
        return temp;
    }

    void display() { cout << str << endl; }
};

int main() {
    Concatenate s1, s2, result;
    s1.setString("Hello ");
    s2.setString("World!");
    result = s1 + s2;
    result.display();
    return 0;
}

