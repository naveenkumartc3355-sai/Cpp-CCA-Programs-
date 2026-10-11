#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double basicSalary;
};

int main() {
    Employee e;
    cout << "Enter employee ID: ";
    cin >> e.id;
    cin.ignore();
    cout << "Enter employee name: ";
    getline(cin, e.name);
    cout << "Enter basic salary: ";
    cin >> e.basicSalary;

    double hra = 0.20 * e.basicSalary;
    double da = 0.10 * e.basicSalary;
    double gross = e.basicSalary + hra + da;

    cout << "\nEmployee: " << e.name << "\nID: " << e.id
         << "\nHRA: " << hra << "\nDA: " << da
         << "\nGross salary: " << gross << '\n';
    return 0;
}
