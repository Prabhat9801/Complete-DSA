#include<iostream>
using namespace std;
int reverse(int arr[],int start,int end){
   
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++; 
        end--;
    }
}
int rotate(int arr[],int n,int k){
    k=k%n;
   reverse(arr,0,n-1);
   reverse(arr,0,k-1);
   reverse(arr,k,n-1);
}
int main(){
    int n;
    cout<<"Enter the value of the n = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of times by which we have to rotate the array = ";
    cin>>k;
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}