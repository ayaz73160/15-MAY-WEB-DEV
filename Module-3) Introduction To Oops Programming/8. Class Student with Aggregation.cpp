//8. Class Student with Aggregation

#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    string city, state;

    Address(string c, string s) : city(c), state(s) {}
};

class Student {
private:
    string name;
    int rollNumber;
    double marks;
    Address* address;  // Aggregation

public:
    Student(string n, int roll, double m, Address* addr) 
        : name(n), rollNumber(roll), marks(m), address(addr) {}

    void calculateGrade() {
        if (marks >= 90)
            cout << "Grade: A" << endl;
        else if (marks >= 75)
            cout << "Grade: B" << endl;
        else
            cout << "Grade: C" << endl;
    }

    void display() {
        cout << "Name: " << name << "\nRoll Number: " << rollNumber 
             << "\nMarks: " << marks << "\nCity: " << address->city 
             << "\nState: " << address->state << endl;
    }
};

int main() {
    Address addr("Mumbai", "Maharashtra");
    Student student("Alice", 101, 85.0, &addr);

    student.display();
    student.calculateGrade();

    return 0;
}

