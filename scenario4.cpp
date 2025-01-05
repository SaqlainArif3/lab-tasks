#include <iostream>
using namespace std;

int main() {
    int x, range;
    cout << "Enter the number for the multiplication table: ";
    cin >> x;
    cout << "Enter the range: ";
    cin >> range;

    cout << "Multiplication Table for " << x << ":" << endl;
    for (int i = 1; i <= range; i++) {
        cout << x << " x " << i << " = " << x * i << endl;
    }

    return 0;
}
