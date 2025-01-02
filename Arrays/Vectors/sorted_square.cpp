// Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order. //

#include<iostream>
#include<vector>
using namespace std;
void swap(vector<int>ans){
    for(int i=0;i<ans.size();i++){
    if(ans[i]<ans[i+1]){
        int temp = ans[i];
        ans[i]=ans[i+1];
        ans[i+1]=temp;
    }
}
}
int sort(vector<int>&arr,int n){
    vector<int>ans;
   int i=0;
   int j=n-1;
   while(i<=j){
   if(abs(arr[i])<abs(arr[j])){
    ans.push_back(arr[j]*arr[j]);
    j--;
   }
  
   else {
    ans.push_back(arr[i]*arr[i]);
    i++;
   }
   
   }
   swap(ans);
   
  for(int i=ans.size()-1;i>=0;i--){
   
    cout<<ans[i]<<" ";
  }
   cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    sort(arr,n);
   
}