#include<iostream>
using namespace std;
int main(){
    int arr[100]={1,2,3,4,5,6,7,8,9};
   for(int i = 0;i<=8;i++){
    cout<<arr[i]<<" , ";
   }
   cout<<endl;
   arr[5]=50;
      for(int i = 0;i<=8;i++){
    cout<<arr[i]<<" , ";
   }
    return 0;
}