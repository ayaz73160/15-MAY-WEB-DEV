//7. Class Date with Validation

#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void setDate(int d, int m, int y) {
        if (isValid(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid Date!" << endl;
        }
    }

    bool isValid(int d, int m, int y) {
        if (d < 1 || d > 31 || m < 1 || m > 12) return false;
        if (m == 2 && d > 29) return false;  // Simplified validation
        return true;
    }

    void display() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date;
    date.setDate(19, 10, 2024);
    date.display();

    return 0;
}

