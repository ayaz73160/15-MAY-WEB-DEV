//3. Multiple Inheritance: Person, Student, Teacher

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPersonData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    void inputStudentData() {
        inputPersonData();
        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void displayStudentData() {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    void inputTeacherData() {
        inputPersonData();
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayTeacherData() {
        displayPersonData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "\nEnter Student Details:\n";
    student.inputStudentData();
    cout << "\nStudent Details:\n";
    student.displayStudentData();

    cout << "\nEnter Teacher Details:\n";
    teacher.inputTeacherData();
    cout << "\nTeacher Details:\n";
    teacher.displayTeacherData();

    return 0;
}

