#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    cout << "Enter number of elements (1-100): ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Invalid size.\n";
        return 0;
    }

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }

    cout << "Largest = " << largest << "\nSmallest = " << smallest << '\n';
    return 0;
}
