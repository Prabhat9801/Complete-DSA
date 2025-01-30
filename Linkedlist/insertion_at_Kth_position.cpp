#include <iostream>
using namespace std;
class node
{
public:
    int info;
    class node *link;
    node() {}
    node(int val)
    {
        info = val;
        link = NULL;
    }
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
void insertion_at_begining(node *&start, int val)
{
    node *value = new node(val);
    value->link = start;
    start = value;
}
void insertion_at_last(node *&start, int val)
{
    node *temp = start;
    node *value = new node(val);
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = value;
    value = NULL;
}
void insertion(node *&start, int val, int k)
{

    if (start == NULL)
    {
        cout << "The LinkedList is empty" << endl;
    }
    else if (k == 0)
    {
        insertion_at_begining(start, val);
    }
    else if (k == find_length(start))
    {
        insertion_at_last(start, val);
    }
    else if (k > find_length(start))
    {
        cout << "Invalid position" << endl;
    }

    else
    {
        node *temp = start;
        node *value = new node(val);

        for (int i = 1; i <= k - 1; i++)
        {
            temp = temp->link;
        }
        node *temp1 = temp->link;
        temp->link = value;
        value->link = temp1;
    }
}
void traversing(node *start)
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
    int k;
    int val;
    cout<<"Enter the value which should be inserted : ";
    cin>>val;
    cout<<"Enter the value of index where should be inserted of the value : ";
    cin>>k;

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
    int lengthofLinkedList = find_length(start);
    cout << "Linkedlist before insertion : " << endl;
    traversing(start);
    cout << endl;

    insertion(start, val, k);
    cout << "Linkedlist after insertion : " << endl;
    traversing(start);

    return 0;
}