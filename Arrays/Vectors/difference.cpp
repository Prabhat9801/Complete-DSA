// Find the differences between the sum of even elements at even indices to the summ of the odd elements at odd indices //

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i =0;i<n;i++){
int ele;
cin>>ele;
arr.push_back(ele);
    }
    int evensum = 0;
    int oddsum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evensum=evensum + arr[i];
        }
    }
     for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            oddsum=oddsum + arr[i];
        }
    }
    cout<<"EvenSum - OddSum"<<" = "<<evensum-oddsum;
    return 0;

}