#include<iostream>
using namespace std;

long long power(long long a, int n) {
    // Base case: a^0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive case
    long long halfPower = power(a, n / 2); // Calculate a^(n/2) once

    // If n is even, a^n = a^(n/2) * a^(n/2)
    if (n % 2 == 0) {
        return halfPower * halfPower;
    }
    // If n is odd, a^n = a^(n/2) * a^(n/2) * a
    else {
        return halfPower * halfPower * a;
    }
}

int main() {
    long long a;
    int n;
    cout << "Enter the base value a = ";
    cin >> a;
    cout << "Enter the value of power of a = ";
    cin >> n;

    // Output the result
    cout << a << "^" << n << " = " << power(a, n) << endl;

    return 0;
}
