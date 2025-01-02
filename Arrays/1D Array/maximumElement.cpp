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
    int max = 0;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    cout<<max;
     
    return 0;
}