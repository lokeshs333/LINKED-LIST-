// check if a linked list is a circular linked list or not;

// done in first time only..

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
    while (ptr != nullptr)
    {
        cout << "element is " << ptr->data << endl;
        ptr = ptr->next;
    }
}
struct node *mid(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int count(struct node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void twohalves(struct node *head)
{
    int sizee = count(head);
    cout << "size is " << sizee << endl;
    if (sizee % 2 == 1)
    {
        struct node *q = mid(head);
        while (head != q->next)
        {
            cout << head->data << endl;
            head = head->next;
        }
        q = q->next;
        cout << "lokesh" << endl;
        while (q != NULL)
        {
            // cout << "lokesh pandey" << endl;
            cout << q->data << endl;
            q = q->next;
        }
    }
    if (sizee % 2 == 0)
    {
        struct node *a = mid(head);
        while (head != a)
        {
            cout << head->data << endl;
            head = head->next;
        }
        cout << "lokesh" << endl;

        while (a != NULL)
        {
            cout << a->data << endl;
            a = a->next;
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
    fifth->next = sixth;
    sixth->data = 6;
    sixth->next = NULL;

    traversal(h1);
    cout << "myself lokesh pandey" << endl;

    cout << "myself lokesh pandey" << endl;
    cout << "myself lokesh pandey" << endl;
    twohalves(h1);

    return 0;
}
