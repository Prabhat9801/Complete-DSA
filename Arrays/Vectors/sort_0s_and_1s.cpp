#include<iostream>
#include<vector>
using namespace std;
int sort(vector<int>&arr,int n){
    int count = 0;
    for(int ele:arr){
        if(arr[ele]==0){
            count++;
        }
    }
    for(int i =0;i<n;i++){
        if(i<count){
arr[i]=0;
        }
        else {
            arr[i]=1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}