#include<iostream>
using namespace std;
int reverse(int arr[], int start,int end)
{
   
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    cin>>n;
    int i;
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
int start;
int end;
cin>>start>>end;
reverse(arr,start,end);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}