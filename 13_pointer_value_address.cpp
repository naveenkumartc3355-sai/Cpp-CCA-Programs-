#include <iostream>
using namespace std;

int main() {
    int number = 25;
    int* ptr = &number;

    cout << "Value of number: " << number << '\n';
    cout << "Address of number: " << &number << '\n';
    cout << "Pointer stores address: " << ptr << '\n';
    cout << "Value accessed through pointer: " << *ptr << '\n';
    return 0;
}
