#include <iostream>
using namespace std;

int main() {
    int n, divisibleCount = 0;
    cout << "Enter the number n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            divisibleCount++;
        }
    }

    cout << "Total Numbers Divisible by 3: " << divisibleCount << endl;

    return 0;
}
