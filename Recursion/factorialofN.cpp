#include<iostream>
using namespace std;
int factorial(int n){
if(n==1||n==0){
    return 1;
}
else {
    return n*factorial(n-1);
}
}
int main(){
    int n;
    cout<<"Enter the value of the n = ";
    cin>>n;
    cout<<factorial(n);
}