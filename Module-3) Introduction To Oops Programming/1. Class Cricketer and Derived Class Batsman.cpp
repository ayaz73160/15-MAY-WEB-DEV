//1. Single Inheritance: Class Cricketer and Derived Class Batsman

#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int matches;
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputData() {
        cout << "Enter Batsman Name: ";
        cin >> name;
        cout << "Enter Matches Played: ";
        cin >> matches;
        cout << "Enter Total Runs: ";
        cin >> totalRuns;
        cout << "Enter Best Performance: ";
        cin >> bestPerformance;
        calculateAverage();
    }

    void calculateAverage() {
        averageRuns = (float)totalRuns / matches;
    }

    void displayData() {
        cout << "\nBatsman Name: " << name 
             << "\nMatches Played: " << matches 
             << "\nTotal Runs: " << totalRuns 
             << "\nAverage Runs: " << averageRuns 
             << "\nBest Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman b;
    b.inputData();
    b.displayData();
    return 0;
}

