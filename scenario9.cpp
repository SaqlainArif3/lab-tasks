#include <iostream>
using namespace std;

int main() {
    int n, sumOdd = 0;
    cout << "Enter the range (1 to n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sumOdd += i;
        }
    }

    cout << "Sum of Odd Numbers: " << sumOdd << endl;

    return 0;
}
