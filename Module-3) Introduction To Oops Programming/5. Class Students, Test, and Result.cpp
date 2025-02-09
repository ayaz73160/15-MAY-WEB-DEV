//5. Multilevel Inheritance: Class Students, Test, and Result

#include <iostream>
using namespace std;

class Students {
protected:
    int rollNumber;

public:
    void inputRollNumber() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }
};

class Test : public Students {
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

class Result : public Test {
public:
    void displayResult() {
        int total = subject1 + subject2;
        cout << "\nRoll Number: " << rollNumber 
             << "\nMarks in Subject 1: " << subject1 
             << "\nMarks in Subject 2: " << subject2 
             << "\nTotal Marks: " << total << endl;
    }
};

int main() {
    Result res;
    res.inputRollNumber();
    res.inputMarks();
    res.displayResult();
    return 0;
}

