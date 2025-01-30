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
void delete_from_begning(node *&start)
{
    node *temp = start;
    start = start->link;
    delete temp;
}
void delete_from_last(node *&start)
{

    node *temp = start;

    while (temp->link->link != NULL)
    {
        temp = temp->link;
    }
    node *temp1 = temp;
    temp->link = NULL;
    delete temp1;
}
void delete_from_Kth(node *&start, int k)
{
    if (start == NULL)
    {
        cout << "'Linkedlist is empty." << endl;
    }
    else if (k == 0)
    {
        delete_from_begning(start);
    }
    else if (k == find_length(start))
    {
        delete_from_last(start);
    }
    else if (k > find_length(start))
    {
        cout << "Not possible , Because the length of the node is " << find_length(start) << endl;
    }
    else
    {
        node *temp = start;

        for (int i = 1; i < k - 1; i++)
        {
            temp = temp->link;
        }
        node *temp1 = temp->link;
        temp->link = temp1->link;
        delete temp1;
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
    int k;
    cout<<"Enter the value of the index , which will delete : ";
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
    cout << "Original Linkedlist :" << endl;
    traverse(start);
    delete_from_Kth(start, k);
    cout << endl;
    cout << "Linkedlist after deletion from the " << k << "th position : " << endl;
    traverse(start);
    return 0;
}