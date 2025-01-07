#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the n = ";
    cin>>n;
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        nst++;
        cout<<"\n";
    }
    return 0;
}