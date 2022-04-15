
// thiplet of having a sum equals to k in a sorted linked list
// optimized complexity is 0n2
// we can easily do it in 0n3 by using 3 for loop
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *previous;
};
void traversal(struct node *head)
{
    while (head != NULL)
    {
        cout << "element ->" << head->data << endl;
        head = head->next;
    }
}
void pairwithsuminll(struct node *head, int sum)
{
    struct node *a = head;
    struct node *b = head;
    while (b != NULL && b->next != NULL)
    {
        b = b->next;
    }
    // cout << "last element is " << b->data;
    // while (a != b)
    cout << "lokesh pandey is " << b->data << endl;
    cout << "lokesh pandey is " << a->data << endl;
    while (a != b && b->next != a)
    {
        if (a->data + b->data == sum)
        {
            cout << "elements are "
                 << "(" << a->data << "," << b->data << ")" << endl;
            a = a->next;
            b = b->previous;
        }
        if (a->data + b->data > sum)
        {
            b = b->previous;
        }
        if (a->data + b->data < sum)
        {
            a = a->next;
        }
    }
}
void tripsum(struct node *head, int k)
{
    struct node *first = head;
    struct node *second;
    struct node *third = head;
    while (third != NULL && third->next != NULL)
    {
        third = third->next;
    }
    for (first = head; first != third->previous->previous; first = first->next)
    {
        second = first->next;
        int difference = k - first->data;
        while (second != third && third->next != second)
        {
            if (second->data + third->data == difference)
            {
                cout << "elements are "
                     << "(" << first->data << "," << second->data << ","
                     << third->data << ")" << endl;
                second = second->next;
                third = third->previous;
            }
            if (second->data + third->data > difference)
            {
                third = third->previous;
            }
            if (second->data + second->data < difference)
            {
                second = second->next;
            }
        }
    }
}
int main()
{
    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *forth = new node;
    node *fifth = new node;
    node *sixth = new node;
    head->data = 1;
    head->next = second;
    head->previous = NULL;
    second->data = 2;
    second->next = third;
    second->previous = head;
    third->data = 3;
    third->next = forth;
    third->previous = second;
    forth->data = 4;
    forth->next = fifth;
    forth->previous = third;
    fifth->data = 5;
    fifth->previous = forth;
    fifth->next = sixth;
    sixth->data = 6;
    sixth->previous = fifth;
    sixth->next = NULL;

    traversal(head);
    cout << "lokesh pandey" << endl;
    // pairwithsuminll(head, 7);

    // traversal(head);
    tripsum(head, 10);

    return 0;
}