// Given an array of the N elements , check if there exist a pair (i,j) such that arr[i]+arr[j]==k and where i!=j. //

#include<iostream>
using namespace std;
int sum(int arr[],int n,int k){
    int i ;
    int j ;
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]+arr[j]==k && i!=j ) {
            cout<<i<<" "<<j<<endl;
        }
    }
}

}
int main(){
    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum(arr,n,k);
    
    }
    
