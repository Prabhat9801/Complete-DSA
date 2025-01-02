#include<iostream>
using namespace std;
int sum(int n){
    if(n==1){
        return 1;

    }
    else {
        return sum(n-1)+n;
    }
}
int main(){
    int n;
    cout<<"Enter the value of the N = ";
    cin>>n;
    cout<<sum(n);
}
