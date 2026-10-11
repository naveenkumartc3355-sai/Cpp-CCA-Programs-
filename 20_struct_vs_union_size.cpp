#include <iostream>
using namespace std;

struct StudentStruct {
    int rollNo;
    float marks;
    char grade;
};

union StudentUnion {
    int rollNo;
    float marks;
    char grade;
};

int main() {
    cout << "Size of struct StudentStruct: " << sizeof(StudentStruct) << " bytes\n";
    cout << "Size of union StudentUnion: " << sizeof(StudentUnion) << " bytes\n";
    cout << "A struct allocates storage for all members (plus possible padding).\n";
    cout << "A union shares storage among its members.\n";
    return 0;
}
