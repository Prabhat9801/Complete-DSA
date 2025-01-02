 // Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order. //

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int square(vector<int>&arr,int n){
  
    vector<int>ans;
    for(int i=0;i<n;i++){
        ans.push_back(arr[i]*arr[i]);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
  cout<<endl;
   
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);

    }
    square(arr,n);
    return 0;


}