#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the n = ";
    cin>>n;
    int nst=1;
    int nsp=n/2;
    if(n%2!=0){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
         
        for(int k=1;k<=nst;k++){
        cout<<"*";
        }
        if(i<=n/2){
        nsp--;
        nst=nst+2;
       
        }
        else{
            nsp++;
            nst=nst-2;
        }
        cout<<"\n";

    }
    }
    else {
        cout<<"incorrect input for the Dimond patter";
    }
    
    return 0;
}