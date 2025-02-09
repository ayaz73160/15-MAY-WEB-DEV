//6. C++ Program: Class for Person

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Member function to set the values
    void setValues(string n, int a, string c) {
        name = n;
        age = a;
        country = c;
    }

    // Member function to get the values
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {
    Person person;
    string name, country;
    int age;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();  // Clear newline character from input buffer
    cout << "Enter country: ";
    getline(cin, country);

    // Setting and displaying values
    person.setValues(name, age, country);
    person.display();

    return 0;
}

