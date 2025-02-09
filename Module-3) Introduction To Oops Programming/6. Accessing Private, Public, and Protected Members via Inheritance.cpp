//6. Accessing Private, Public, and Protected Members via Inheritance

#include <iostream>
using namespace std;

class Base {
private:
    int privateData = 10;

protected:
    int protectedData = 20;

public:
    int publicData = 30;

    int getPrivateData() {
        return privateData;
    }
};

class Derived : public Base {
public:
    void displayData() {
        cout << "Private Data: " << getPrivateData() << endl;
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

int main() {
    Derived obj;
    obj.displayData();
    return 0;
}

