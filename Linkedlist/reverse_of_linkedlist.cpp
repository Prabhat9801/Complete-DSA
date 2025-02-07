#include <iostream>
using namespace std;
class node
{
public:
    int info;
    node *link;
    node() {}
};
int find_length(node *&start)
{
    node *temp = start;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}

void reverse(node *&start)
{
    int length=find_length(start);
    if (start == NULL)
    {
        cout << "'Linkedlist is empty." << endl;
    }

    else
    {
       
    node *prev = NULL;
    node *current = start;
    node *next = NULL;

    while (current != NULL)
    {
        next = current->link; // Save next node
        current->link = prev; // Reverse current node's pointer
        prev = current;       // Move prev to current
        current = next;       // Move current to next
    }
    start = prev; // Update head to the new first node

        

       
       
    }
}
void traverse(node *&start)
{
    node *temp = start;
    while (temp != NULL)
    {
        cout << temp->info << endl;
        temp = temp->link;
    }
}
int main()
{
   
    node n1, n2, n3, n4, n5;
    n1.info = 10;
    n2.info = 20;
    n3.info = 30;
    n4.info = 40;
    n5.info = 50;
    node *start = &n1;
    n1.link = &n2;
    n2.link = &n3;
    n3.link = &n4;
    n4.link = &n5;
    n5.link = NULL;
    cout << "Original Linkedlist :" << endl;
    traverse(start);

    cout << endl;
    cout << "Linkedlist after reverse" << endl;
    reverse(start);
    traverse(start);
    // traverse(start);
    return 0;
}