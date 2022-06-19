// check if a linked list is a circular linked list or not;..

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        // cout << "element ->" << head->data << endl;
        cout << "element is " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}
void checkcircular(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            cout << "the linked kist is circular" << endl;
            break;
        }
    }
}

int main()
{
    struct node *h1 = new node;
    struct node *s1 = new node;
    struct node *t1 = new node;
    struct node *f1 = new node;
    struct node *fifth = new node;
    struct node *sixth = new node;
    h1->data = 1;
    h1->next = s1;
    s1->data = 2;
    s1->next = t1;
    t1->data = 3;
    t1->next = f1;
    f1->data = 4;
    f1->next = fifth;
    fifth->data = 5;
    fifth->next = h1;

    // traversal(h1);
    cout << "myself lokesh pandey" << endl;

    cout << "myself lokesh pandey" << endl;
    cout << "myself lokesh pandey" << endl;
    checkcircular(h1);

    return 0;
}
