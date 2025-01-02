// Given an array of N elements , count total number of elements having atleast 1 element greater than itself. //
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
   
    int count =0;
    for(int i =0;i<n;i++){
        if(arr[i]==max){
            count++;

        }
    }
    cout<<n-count;

     
    return 0;
}