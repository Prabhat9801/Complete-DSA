#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    for(int i =0;i<5;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int i =0;
    while(i<arr.size()){
        cout<<arr[i++]<<" ";
    }
    cout<<endl;
    arr.insert(arr.begin()+2,6);
   i=0;
    while(i<arr.size()){
        cout<<arr[i++]<<" ";
    }
    cout<<endl;
    arr.erase(arr.begin()+3);
 i=0;
    while(i<arr.size()){
        cout<<arr[i++]<<" ";
    }
    arr.clear();
   i=0;
    while(i<arr.size()){
        cout<<arr[i++]<<" ";
    }
}