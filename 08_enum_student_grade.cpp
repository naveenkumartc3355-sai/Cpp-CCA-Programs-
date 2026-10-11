#include <iostream>
using namespace std;

enum Grade { FAIL, PASS, GOOD, VERY_GOOD, EXCELLENT };

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks\n";
        return 0;
    }

    Grade grade;
    if (marks < 35) grade = FAIL;
    else if (marks < 50) grade = PASS;
    else if (marks < 70) grade = GOOD;
    else if (marks < 85) grade = VERY_GOOD;
    else grade = EXCELLENT;

    cout << "Grade: ";
    switch (grade) {
        case FAIL: cout << "Fail\n"; break;
        case PASS: cout << "Pass\n"; break;
        case GOOD: cout << "Good\n"; break;
        case VERY_GOOD: cout << "Very Good\n"; break;
        case EXCELLENT: cout << "Excellent\n"; break;
    }
    return 0;
}
