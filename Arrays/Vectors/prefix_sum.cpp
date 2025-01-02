#include<iostream>
#include<vector>
using namespace std;
int prefix(vector<int>&arr,int n){
    vector<int>ans;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        ans.push_back(sum);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main (){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    prefix(arr,n);
    return 0;
}