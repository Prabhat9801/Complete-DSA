#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the n = ";
    cin>>n;
    
    int p=n/2;
    int nst=p+1;
    int nsp=1;
    if(n%2!=0){
    for(int i=1;i<=n;i++){
         for(int k=1;k<=nst;k++){
        cout<<"*";
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
         
        for(int k=1;k<=nst;k++){
        cout<<"*";
        }
        if(i<=n/2){
        nsp=nsp+2;
        nst=nst-1;
       
        }
        else{
            nsp=nsp-2;
            nst=nst+1;
        }
        cout<<"\n";

    }
    }
    else {
        cout<<"incorrect input for the Dimond patter";
    }
    
    return 0;
}