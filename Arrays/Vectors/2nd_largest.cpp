#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int>arr;
    
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int i;
    int max = 0;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    cout<<"Max = "<<max<<endl;
    int second_max = 0;
    for(i=0;i<n;i++){
        if(arr[i]>second_max&&arr[i]!=max){
            second_max=arr[i];
        }
        
    }
    cout<<"2nd Max = "<<second_max<<endl;
     
    return 0;
}