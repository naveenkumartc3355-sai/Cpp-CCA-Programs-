#include <iostream>
using namespace std;

enum Signal { RED = 1, YELLOW, GREEN };

int main() {
    int choice;
    cout << "Traffic signal: 1-Red, 2-Yellow, 3-Green\nChoose: ";
    cin >> choice;

    switch (choice) {
        case RED: cout << "RED: Stop\n"; break;
        case YELLOW: cout << "YELLOW: Get ready\n"; break;
        case GREEN: cout << "GREEN: Go when safe\n"; break;
        default: cout << "Invalid choice\n";
    }
    return 0;
}
