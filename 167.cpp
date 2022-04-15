#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void traversal(struct node *head)
{
    while (head != NULL)
    {
        cout << "element ->" << head->data << endl;
        head = head->next;
    }
}

node *segregate(node *head)
{

    // Add code her
    int zero = 0, one = 0, two = 0;
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
            zero++;
        else if (temp->data == 1)
            one++;
        else
            two++;
        temp = temp->next;
    }
    node *curr = head;
    while (zero--)
    {
        curr->data = 0;
        curr = curr->next;
    }
    while (one--)
    {
        curr->data = 1;
        curr = curr->next;
    }
    while (two--)
    {
        curr->data = 2;
        curr = curr->next;
    }
    return head;
}

int main()
{
    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *forth = new node;
    node *fifth = new node;
    node *sixth = new node;
    node *seven = new node;
    node *eight = new node;
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 2;
    third->next = forth;
    forth->data = 1;
    forth->next = fifth;
    fifth->data = 2;
    fifth->next = sixth;
    sixth->data = 0;
    sixth->next = seven;
    seven->data = 2;
    seven->next = eight;
    eight->data = 2;
    eight->next = NULL;
    traversal(head);
    node *a = segregate(head);
    cout << "lokesh pandey" << endl;

    traversal(a);
    // traversal(head);

    return 0;
}