// monve last element to front of a given linked list
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
struct node *moveinfront(struct node *head)
{
    struct node *p = head;
    struct node *q;
    struct node *a = head;
    struct node *lokesh;
    lokesh->data = 33334444;
    while (p->next != NULL && p->next->next != NULL)
    {
        p = p->next;
    }
    q = p->next;
    p->next = NULL;
    q->next = head;
    return q;
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
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = forth;
    forth->data = 4;
    forth->next = fifth;
    fifth->data = 5;
    fifth->next = six;
    six->data = 6;
    six->next = seven;
    seven->data = 7;
    seven->next = eight;
    eight->data = 333;
    eight->next = NULL;
    traversal(head);
    cout << "pandey lokesh" << endl;
    moveinfront(head);
    struct node *a = moveinfront(head);
    traversal(a);

    return 0;
}