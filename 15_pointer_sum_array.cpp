#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    cout << "Enter number of elements (1-100): ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Invalid size\n";
        return 0;
    }

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0;
    int* ptr = arr;
    for (int i = 0; i < n; i++) sum += *(ptr + i);

    cout << "Sum using pointer = " << sum << '\n';
    return 0;
}
