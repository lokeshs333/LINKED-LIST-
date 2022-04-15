// deletion an data from an circular linked list
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node *a = head;
    do
    {
        cout << "element ->" << a->data << endl;
        a = a->next;
    } while (a != head);
}
void deletionincircularll(struct node *head, int data)
{
    struct node *a = head;
    struct node *b = head->next;
    while (b->data != data)
    {
        a = a->next;
        b = b->next;
    }
    a->next = b->next;
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
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = forth;
    forth->data = 4;
    forth->next = fifth;
    fifth->data = 5;
    fifth->next = head;
    traversal(head);
    cout << "lokesh pandey" << endl;
    deletionincircularll(head, 5);
    traversal(head);

    return 0;
}