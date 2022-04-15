// segregate even and odd in a linked list

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traversal(node *head)
{
    while (head != NULL)
    {
        cout << "element ->" << head->data << endl;
        head = head->next;
    }
}
node *segregate(struct node *head)
{
    struct node *odd = NULL;
    struct node *o = NULL;
    struct node *even = NULL;
    struct node *e = NULL;

    while (head != NULL)
    {
        if (head->data % 2 == 0)
        {
            if (even == NULL)
            {
                even = head;
                e = head;
            }
            else
            {
                e->next = head;
                e = e->next;
            }
        }
        if (head->data % 2 == 1)
        {
            if (odd == NULL)
            {
                odd = head;
                o = head;
            }
            else
            {
                o->next = head;
                o = o->next;
            }
        }
        head = head->next;
    }
    if (e)
        e->next = odd;
    if (o)
        o->next = NULL;
    if (even)
    {
        return even;
    }
    else
    {
        return odd;
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
    eight->data = 8;
    eight->next = NULL;
    traversal(head);
    cout << "lokesh pandey have a good day man " << endl;
    node *a = segregate(head);
    traversal(a);

    return 0;
}