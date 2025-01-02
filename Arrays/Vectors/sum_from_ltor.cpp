//  Given an array of integers of size n. Answer Q queries where you need to print the sum of values in a given range of indices from l to r(both included).

// Note : The values of l to r in queries follow 1-based indexing. 

#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr(n+1,0);
for(int i =1;i<=n;i++){
    cin>>arr[i];
}
for(int i=0;i<=n;i++){
    arr[i]+=arr[i-1];
}
int q;
cin>>q;
while(q--){
    int l;
    int r;
    cin>>l>>r;
    int ans=0;
    ans=arr[r]-arr[l-1];
    cout<<ans<<endl;
}
return 0;
}