#include <iostream>
using namespace std;

union Sample {
    int number;
    float decimal;
    char letter;
};

int main() {
    Sample s;
    cout << "Address of number: " << static_cast<void*>(&s.number) << '\n';
    cout << "Address of decimal: " << static_cast<void*>(&s.decimal) << '\n';
    cout << "Address of letter: " << static_cast<void*>(&s.letter) << '\n';

    s.number = 65;
    cout << "After assigning number, number = " << s.number << '\n';
    // Union members share storage. Reading a different member than the one
    // most recently written is generally not a portable way to convert values.
    s.letter = 'A';
    cout << "After assigning letter, letter = " << s.letter << '\n';
    return 0;
}
