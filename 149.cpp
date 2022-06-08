// intersection of two sorted linked list.......

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    while (head != NULL)
    {
        cout << "element ->" << head->data << endl;
        head = head->next;
    }
}
void intersection(struct node *h1, struct node *h2)
{
    node *first = h1;
    node *second = h2;
    while (h1 != NULL && h2 != NULL)
    {
        if (first->data == second->data)
        {
            cout << "intersection is" << first->data << endl;
            first = first->next;
            second = second->next;
        }
        else if (first->data > second->data)
        {
            second = second->next;
        }
        else if (second->data > first->data)
        {
            first = first->next;
        }
    }
}
int main()
{
    struct node *h1 = new node;
    struct node *s1 = new node;
    struct node *t1 = new node;
    struct node *f1 = new node;
    struct node *h2 = new node;
    struct node *s2 = new node;
    struct node *t2 = new node;
    h1->data = 1;
    h1->next = s1;
    s1->data = 2;
    s1->next = t1;
    t1->data = 3;
    t1->next = f1;
    f1->data = 4;
    f1->next = NULL;
    h2->data = 2;
    h2->next = s2;
    s2->data = 3;
    s2->next = t2;
    t2->data = 18;
    t2->next = NULL;
    traversal(h1);
    cout << "myself lokesh pandey" << endl;
    traversal(h2);
    cout << "myself lokesh pandey" << endl;
    cout << "myself lokesh pandey" << endl;
    intersection(h1, h2);
    return 0;
}
