#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter n: ";
    cin>>n;
    int nst=1;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            cout<<count<<" ";
            count++;
        }
        
        nst++;
        cout<<"\n";
    }
    return 0;
}