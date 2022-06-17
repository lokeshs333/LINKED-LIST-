
// flatten the linked list..
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *bottom;
};
node *mergeTwoLinkedList(node *a, node *b)
{
    node *temp = new node;
    temp->data = 0;
    node *res = temp;

    while (a != NULL && b != NULL)
    {
        if (a->data < b->data)
        {
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else
        {
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }
    }
    while (a != NULL)
    {
        temp->bottom = a;
        temp = temp->bottom;
        a = a->bottom;
    }
    while (b != NULL)
    {
        temp->bottom = b;
        temp = temp->bottom;
        b = b->bottom;
    }
    return res->bottom;
}
node *flatten(node *root)
{
    // Your code here
    if (root == NULL || root->next == NULL)
        return root;

    // recur to the last node
    root->next = flatten(root->next);

    // merge the two nodes
    root = mergeTwoLinkedList(root, root->next);

    return root;
}

void traversal(node *head)
{
    while (head != NULL)
    {
        cout << "element ->" << head->data << endl;
        head = head->next;
    }
}
void traversalbottom(node *head)
{
    while (head != NULL)
    {
        cout << "element ->" << head->data << endl;
        head = head->bottom;
    }
}
int main()
{
    node *head = new node;
    node *head2 = new node;
    node *head3 = new node;
    node *head4 = new node;
    node *second = new node;
    node *second2 = new node;
    node *third = new node;
    node *third2 = new node;
    node *third3 = new node;
    node *forth = new node;
    node *forth2 = new node;
    node *forth3 = new node;
    node *forth4 = new node;
    head->data = 5;
    head->bottom = head2;
    head2->data = 7;
    head2->bottom = head3;
    head3->data = 8;
    head3->bottom = head4;
    head4->data = 30;
    head4->bottom = NULL;
    head->next = second;
    second->data = 10;
    second->bottom = second2;
    second2->data = 20;
    second2->bottom = NULL;
    second->next = third;
    third->data = 19;
    third->bottom = third2;
    third2->data = 22;
    third2->bottom = third3;
    third3->data = 50;
    third3->bottom = NULL;
    third->next = forth;
    forth->data = 28;
    forth->next = NULL;
    forth->bottom = forth2;
    forth2->data = 35;
    forth2->bottom = forth3;
    forth3->data = 40;
    forth3->bottom = forth4;
    forth4->data = 45;
    forth4->bottom = NULL;
    // forth->next = NULL;
    traversal(head);
    traversalbottom(head);
    cout << "lokesh pandey r u fine" << endl;
    for (node *i = head; i != NULL; i = i->next)
    {
        for (node *j = i; j != NULL; j = j->bottom)
        {
            cout << " ->" << j->data;
        }
        cout << endl;
    }
    return 0;
}
