// remove duplicates from an sorted linked list
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "element ->" << ptr->data << endl;
        ptr = ptr->next;
    }
};
void removeduplicatesinsortedll(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        if (p->data == q->data)
        {
            q = q->next;
            p->next = q;
        }
        else
        {
            p = p->next;
            q = q->next;
        }
    }
}
int main()
{
    struct node *head = new (struct node);
    struct node *second = new (struct node);
    struct node *third = new (struct node);
    struct node *forth = new (struct node);
    struct node *fifth = new (struct node);
    struct node *six = new (struct node);
    struct node *seven = new (struct node);
    struct node *eight = new (struct node);

    head->data = 1;
    head->next = second;
    second->data = 1;
    second->next = third;
    third->data = 1;
    third->next = forth;
    forth->data = 4;
    forth->next = fifth;
    fifth->data = 5;
    fifth->next = six;
    six->data = 6;
    six->next = seven;
    seven->data = 7;
    seven->next = eight;
    eight->data = 8;
    eight->next = NULL;
    traversal(head);
    cout << "pandey lokesh" << endl;
    removeduplicatesinsortedll(head);
    traversal(head);

    return 0;
}