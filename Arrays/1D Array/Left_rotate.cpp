#include <iostream>
using namespace std;

void reverse_part(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void left_rotate(int arr[], int n, int k) {
    // Handle cases where k is larger than n
    k = k % n;

    // Step 1: Reverse the first k elements
    reverse_part(arr, 0, k - 1);

    // Step 2: Reverse the rest of the array from k to end
    reverse_part(arr, k, n - 1);

    // Step 3: Reverse the entire array
    reverse_part(arr, 0, n - 1);
}

int main() {
    int n, k;
    cin >> n >> k;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    left_rotate(arr, n, k);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
