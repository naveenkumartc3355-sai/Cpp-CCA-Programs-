#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    double marks1, marks2, marks3;
};

int main() {
    Student s;
    cout << "Enter student name: ";
    getline(cin, s.name);
    cout << "Enter marks in three subjects: ";
    cin >> s.marks1 >> s.marks2 >> s.marks3;

    double total = s.marks1 + s.marks2 + s.marks3;
    cout << "Name: " << s.name << "\nTotal = " << total
         << "\nAverage = " << total / 3.0 << '\n';
    return 0;
}
