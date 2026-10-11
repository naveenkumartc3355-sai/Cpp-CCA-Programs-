#include <iostream>
using namespace std;

union Value {
    int number;
    float decimal;
    char letter;
};

int main() {
    Value v;
    cout << "Enter an integer: ";
    cin >> v.number;
    cout << "Integer stored in union: " << v.number << '\n';
    return 0;
}
