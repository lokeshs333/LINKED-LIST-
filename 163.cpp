//..
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *previous;
};
void traversal(node *head)
{
    while (head != NULL)
    {
        cout << "element ->" << head->data << endl;
        head = head->next;
    }
}
node *reverse(node *head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *nex;
    int count = 0;
    while (curr != NULL && count < k)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
        count++;
    }
    if (nex != NULL)
    {
        head->next = reverse(nex, k);
    }
    return prev;
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
    node *a = reverse(head, 2);
    traversal(a);
    return 0;
}
