#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    string department;
};

int main() {
    Student s;
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, s.name);
    cout << "Enter department: ";
    getline(cin, s.department);

    cout << "\nStudent Details\nRoll No: " << s.rollNo
         << "\nName: " << s.name
         << "\nDepartment: " << s.department << '\n';
    return 0;
}
