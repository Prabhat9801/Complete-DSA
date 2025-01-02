#include <iostream>
using namespace std;
void num(int n)
{
    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        num(n - 1);
        cout << " " << n;
    }
}
int main()
{
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    num(n);
}