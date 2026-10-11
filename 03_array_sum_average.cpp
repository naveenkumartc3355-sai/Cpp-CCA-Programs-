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

    int sum = 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum << "\nAverage = " << static_cast<double>(sum) / n << '\n';
    return 0;
}
