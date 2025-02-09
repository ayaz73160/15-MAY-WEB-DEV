//6. Class Employee with Constructor

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}

    void setSalary(double performanceRating) {
        salary += performanceRating * 1000;  // Bonus based on performance
    }

    void display() {
        cout << "Name: " << name << "\nID: " << id << "\nSalary: " << salary << endl;
    }
};

int main() {
    Employee emp("John", 101, 5000.0);
    emp.setSalary(3);
    emp.display();

    return 0;
}

