// check if we can partion the array into two subarrays with equal sum. more formally, check that the prefix sum of a part of the array is equal to the suffix sum of the rest of the array //


#include<iostream>
#include<vector>
using namespace std;
int prefix(int arr[],int n){
    
    int totalsum=0;
    int sum=0;
    for(int i=0;i<n;i++){
        
        totalsum=totalsum+arr[i];
        
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==totalsum-sum){
            cout<<"Partiton possinle at index: "<<i<<endl;
            return 1;
        }
    
        
    }
     cout<<"Partition not found.";
            return 0;
    }
  

int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    prefix(arr,n);
    
    return 0;
}