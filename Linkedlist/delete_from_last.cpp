#include<iostream>
using namespace std;
class node{
    public:
    int info;
    node *link;
    node(){}

};

void delete_from_last(node *&start){
    
    node * temp=start;
    
   while(temp->link->link!=NULL){
    temp=temp->link;
   }
   node *temp1=temp;
   temp->link=NULL;
   delete temp1;



}
void traverse(node *&start){
    node * temp=start;
    while(temp!=NULL){
        cout<<temp->info<<endl;
        temp=temp->link;
    }
}
int main(){
    node n1,n2,n3,n4,n5;
    n1.info=10;
    n2.info=20;
    n3.info=30;
    n4.info=40;
    n5.info=50;
    node *start=&n1;
    n1.link=&n2;
    n2.link=&n3;
    n3.link=&n4;
    n4.link=&n5;
    n5.link=NULL;
    traverse(start);
    delete_from_last(start);
    traverse(start);
    return 0;
}