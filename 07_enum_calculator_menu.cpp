#include <iostream>
using namespace std;

enum Operation { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE };

int main() {
    double a, b;
    int choice;
    cout << "1.Add  2.Subtract  3.Multiply  4.Divide\nChoose operation: ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice) {
        case ADD: cout << "Result = " << a + b << '\n'; break;
        case SUBTRACT: cout << "Result = " << a - b << '\n'; break;
        case MULTIPLY: cout << "Result = " << a * b << '\n'; break;
        case DIVIDE:
            if (b == 0) cout << "Cannot divide by zero\n";
            else cout << "Result = " << a / b << '\n';
            break;
        default: cout << "Invalid operation\n";
    }
    return 0;
}
