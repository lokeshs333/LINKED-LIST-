// intersection point of two linked list

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
int sizee(struct node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void intersectionpoint(struct node *head1, struct node *head2)
{
    int a = sizee(head1);
    cout << "size is " << a << endl;
    int b = sizee(head2);
    cout << "size is " << b << endl;
    // int diff;
    if (a > b)
    {
        // struct node *p = head1;
        // diff = a - b;
        // int count = 0;
        for (int i = 0; i < (a - b); i++)
        {
            head1 = head1->next;
        }
    }
    if (b > a)
    {
        // struct node *q = head2;
        // diff = a - b;
        // int count = 0;
        for (int i = 0; i < (b - a); i++)
        {
            head2 = head2->next;
        }
    }
    while (head1->data != head2->data)
    {
        head1 = head1->next;
        head2 = head2->next;
    }
    cout << "intersection point is " << head1->data << endl;
}

int main()
{
    struct node *h1 = new node;
    struct node *s1 = new node;
    struct node *t1 = new node;
    struct node *f1 = new node;
    struct node *h2 = new node;
    struct node *fifth1 = new node;
    h1->data = 1;
    h1->next = s1;
    s1->data = 2;
    s1->next = t1;
    t1->data = 3;
    t1->next = f1;
    f1->data = 4;
    h2->data = 333;
    h2->next = f1;
    f1->next = fifth1;
    fifth1->data = 5;
    fifth1->next = NULL;

    traversal(h1);
    cout << "myself lokesh pandey" << endl;
    traversal(h2);
    cout << "myself lokesh pandey" << endl;
    cout << "myself lokesh pandey" << endl;
    intersectionpoint(h1, h2);
    return 0;
}