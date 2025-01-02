// Find the uniquee number in the given array where all the elements are being the repeated twice with one value being unique. //

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            cout << arr[i];
        }
    }
    return 0;
}