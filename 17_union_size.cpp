#include <iostream>
using namespace std;

union Data {
    int number;
    float decimal;
    char letter;
};

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of char: " << sizeof(char) << " byte\n";
    cout << "Size of union Data: " << sizeof(Data) << " bytes\n";
    return 0;
}
