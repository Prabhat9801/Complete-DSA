#include<iostream>
using namespace std;

int main(){
    int n; //rows//
    int m; //column//
     cout<<"Enter the rows and column of matrices :"<<endl;
     cout<<"Rows: ";
    cin>>n; 
    cout<<"Columns: ";
    cin>>m;
    
    int arr[n][m];
    cout<<"Enter the elements of the 1st Matrices : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
int temp = n;
n=m;
m=temp;
cout<<"Transpose :"<<endl;
for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}