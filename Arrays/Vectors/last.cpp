// Find the last occerence of element x in a given array //
#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>arr,int n ,int k){
    int occurance=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            occurance=i;
        }
    }
}

int main(){
    int n ;
    int k ;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    
    }
    cin>>k;
     int occurance=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            occurance=i;
        }
    }
    cout<<occurance<<endl;

     for(int i=n-1;i>=0;i--){
        if(arr[i]==k){
            occurance=i;
            break;
        }
    }
    cout<<occurance<<endl;
   
}