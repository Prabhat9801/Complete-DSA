#include<iostream>
#include<vector>
using namespace std;
void sum(vector<int>arr,int n , int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int l=j+1;l<n;l++){
            if(arr[i]+arr[j]+arr[l]==k){
                cout<<i<<","<<j<<","<<l<<endl;
            }
        }
        }
    }
}
int main(){
    int n ;
    cin>>n;
    vector<int>arr;
    
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int k;
    cin>>k;
    sum(arr,n,k);
}