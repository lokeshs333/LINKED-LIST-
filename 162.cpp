// rotate double linked list by k nodes....

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *previous;
};
void printList(struct node *head)
{
    while (head != NULL)
    {
        cout << "element -> " << head->data << " " << endl;
        head = head->next;
    }
}

void rotatedoublell(struct node *head, int n)
{
    node *a = head;
    node *b = head;
    struct node *c = head;
    while (b != NULL && b->next != NULL)
    {
        b = b->next;
    }
    cout << "b ka data " << b->data << endl;
    for (int i = 0; i < n; i++)
    {
        a = a->next;
    }
    b->next = c;
    a->previous->next = NULL;
    cout << "data of a is " << a->data << endl;
    printList(a);
}
int main()
{
    // struct node *head = NULL;

    // Create the doubly linked list:
    // 3<->6<->2<->12<->56<->8
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
    printList(head);
    rotatedoublell(head, 4);

    return 0;
}
