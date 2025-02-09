//3. Class Car with Private Variables

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company, model;
    int year;

public:
    void setValues(string c, string m, int y) {
        company = c;
        model = m;
        year = y;
    }

    void display() {
        cout << "Company: " << company << "\nModel: " << model << "\nYear: " << year << endl;
    }
};

int main() {
    Car car;
    car.setValues("Toyota", "Corolla", 2020);
    car.display();

    return 0;
}

