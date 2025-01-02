#include<iostream>
#include<vector>
using namespace std;
void sum(vector<int>arr,int n , int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<","<<j<<endl;
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