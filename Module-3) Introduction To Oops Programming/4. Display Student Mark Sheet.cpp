//4. Multiple Inheritance: Display Student Mark Sheet

#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;

public:
    void inputStudentData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }
};

class Marks {
protected:
    int subject1, subject2;

public:
    void inputMarks() {
        cout << "Enter Marks for Subject 1: ";
        cin >> subject1;
        cout << "Enter Marks for Subject 2: ";
        cin >> subject2;
    }
};

class MarkSheet : public Student, public Marks {
public:
    void displayMarkSheet() {
        cout << "\nStudent Name: " << name << "\nRoll Number: " << rollNumber 
             << "\nMarks in Subject 1: " << subject1 
             << "\nMarks in Subject 2: " << subject2 
             << "\nTotal Marks: " << subject1 + subject2 << endl;
    }
};

int main() {
    MarkSheet sheet;
    sheet.inputStudentData();
    sheet.inputMarks();
    sheet.displayMarkSheet();
    return 0;
}

