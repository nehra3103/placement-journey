#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int digits = 0;
    int sum = 0;

    // Count number of digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of each digit raised to the power of digits
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}