// Find the last occerence of element x in a given array //
#include<iostream>
#include<vector>
using namespace std;
int check(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                cout<<"sorted";
                return 1;
            }
            
            else{
                cout<<"Unsorted";
                return -1;
            }
           
        }
    }
}
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
    
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    
    }
    int result = check(arr,n);
    if(result=1){
        cout<<"sorted";
    }
    else {
        cout<<"Unsorted";
    }
    
   
}