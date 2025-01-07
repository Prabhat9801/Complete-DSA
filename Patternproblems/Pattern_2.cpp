#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int nst=n;
    for(int i=1;i<=n;i++){
        for(int j=nst;j>=1;j--){
            cout<<"*";
     
       }
       nst--;
     cout<<"\n"; 
    }
    return 0;

}