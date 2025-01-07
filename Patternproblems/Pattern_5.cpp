#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the n = ";
    cin >> n;

    int nst = 1;
    int nsp = n / 2;  // Start with n/2 spaces for centering

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= nsp; j++) {
            cout << " ";
        }

        for (int k = 1; k <= nst; k++) {
            cout << "*";
        }

        nsp--;  // Decrease spaces by 1
        nst += 2;  // Increase stars by 2

        cout << "\n";
    }

    return 0;
}
