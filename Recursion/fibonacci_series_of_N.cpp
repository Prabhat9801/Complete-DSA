#include<iostream>
using namespace std;
int fibonaccii(int n){
    if(n==1||n==0){
        return n;
    }
    else {
        return fibonaccii(n-2)+fibonaccii(n-1);
    }
}
int main(){
    int n =5;
    cout<<"Enter the value of n = ";
    cin>>n;
    for(int i =0;i<=n;i++){
        cout<<" "<<fibonaccii(i);
    }
   
}