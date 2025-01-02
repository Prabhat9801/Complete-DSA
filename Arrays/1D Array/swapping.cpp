#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20};
      for(int i=0;i<2;i++){
    int temp = arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    }
    
    for(int i=0;i<2;i++){
        cout<<arr[i]<<",";
    }
    return 0;
    
}