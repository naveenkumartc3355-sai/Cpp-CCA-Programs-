#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    double price;
};

int main() {
    Book b;
    cout << "Enter book title: ";
    getline(cin, b.title);
    cout << "Enter author: ";
    getline(cin, b.author);
    cout << "Enter price: ";
    cin >> b.price;

    cout << "\nBook Details\nTitle: " << b.title
         << "\nAuthor: " << b.author
         << "\nPrice: " << b.price << '\n';
    return 0;
}
