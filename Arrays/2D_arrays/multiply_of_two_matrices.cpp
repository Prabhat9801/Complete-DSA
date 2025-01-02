#include<iostream>
using namespace std;

int main(){
    int n; //rows//
    int m; //column//
     cout<<"Enter the rows and column of 1st matrices :"<<endl;
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
    int x;
    int y;
 cout<<"Now, enter the rows and column of 2nd matrices :"<<endl;
   cout<<"Rows: ";
    cin>>x; 
    cout<<"Columns: ";
    cin>>y;
    int mar[x][y];
    
    cout<<"Enter the elements of the 2nd Matrices : ";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>mar[i][j];
        }
    }
     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<mar[i][j]<<" ";
        }
        cout<<endl;
    }

    if(m!=x){
        cout<<"Multiplication is not possible."<<endl;

    }
    
    int z[n][y];
    for(int i =0;i<n;i++){
        for(int j=0;j<y;j++){
            int value=0;
            for(int k=0;k<x;k++){
             value+=arr[i][k]*mar[k][j];
            
            }
             z[i][j]=value;
        }
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<y;j++){
            cout<<z[i][j]<<" ";
        }
        cout<<endl;
    }
}