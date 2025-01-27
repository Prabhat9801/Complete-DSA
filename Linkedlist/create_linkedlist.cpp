#include<iostream>
using namespace std;
class node{
    public:
    int info;
    class node *link;
    
};
void traversing(node * n){
    while(n!=NULL){
        cout<<n->info<<endl;
        n=n->link;    
        
    }
}
int main(){
node n1,n2,n3;
n1.info=10;
n2.info=20;
n3.info=30;
node *start;
start=&n1;
n1.link=&n2;
n2.link=&n3;
n3.link=NULL;
traversing(start);

return 0;
}