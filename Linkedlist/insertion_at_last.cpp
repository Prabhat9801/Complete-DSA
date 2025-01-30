#include<iostream>
using namespace std;
class node{
    public:
    int info;
    class node *link;
    node(){}
    node(int val){
        info=val;
        link=NULL;
    }
    
};
void insertion(node *&start, int val ){
    node* temp=start;
    node* value = new node(val);
    while(temp->link!=NULL){
       temp=temp->link;   
      
    }
    temp->link=value;
    value=NULL;
   
    
}
void traversing(node* start){
    node* temp=start;
    while(temp!=NULL){
        cout<<temp->info<<endl;
        temp=temp->link;    
        
    }
}
int main(){
int val=5;
node n1,n2,n3;
n1.info=10;
n2.info=20;
n3.info=30;
node *start=&n1;

n1.link=&n2;
n2.link=&n3;
n3.link=NULL;

traversing(start);
cout<<endl;
insertion(start,val);
traversing(start);

return 0;
}