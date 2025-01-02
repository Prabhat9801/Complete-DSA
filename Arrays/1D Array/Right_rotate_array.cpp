#include <iostream>
using namespace std;
void reverse_first_k1(int arr[],int n,int end,int k){
    int start = k+1;
 while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}
void reverse_first_k(int arr[],int n,int start,int k){
 while (start < k)
    {
        int temp = arr[start];
        arr[start] = arr[k];
        arr[k] = temp;
        start++;
        k--;
    }

}
int reverse(int arr[], int n,int k)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    k=k%n;
    reverse_first_k(arr,n,start,k);
    reverse_first_k1(arr,n,end,k);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin>>k;

    reverse(arr, n,k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}