// intersection of two sorted linked list

// Since the list has two middle nodes with values 3 and 4, we return the second one.

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
void middle(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "mid element is " << slow->data << endl;
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
    fifth->next = NULL;

    traversal(h1);
    cout << "myself lokesh pandey" << endl;

    cout << "myself lokesh pandey" << endl;
    cout << "myself lokesh pandey" << endl;
    middle(h1);

    return 0;
}