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
    cout<<max<<endl;
    int count =0;
    for(int i =0;i<n;i++){
        if(arr[i]==max){
            count++;

        }
    }
    cout<<n-count;

     
    return 0;
}