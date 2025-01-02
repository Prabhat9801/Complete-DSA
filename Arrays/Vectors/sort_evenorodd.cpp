#include<iostream>
#include<vector>
using namespace std;
int sort(vector<int>&arr,int n){
   int i=0;
   int j=n-1;
   while(i<j){
   if(arr[i]%2!=0 &&arr[j]%2==0){
      int temp = arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      
      i++;
      j--;
   }
   else if(arr[i]%2==0){
    i++;
   }
   else if(arr[j]%2!=0){
    j--;
   }
   else {
    cout<<"Not a valid array according to the problem = ";
    break;
   }
   
   }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}