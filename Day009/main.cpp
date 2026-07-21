#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    while (n > 0) {
        sum += n % 10;  // Add last digit
        n /= 10;        // Remove last digit
    }

    cout << sum;

    return 0;
}