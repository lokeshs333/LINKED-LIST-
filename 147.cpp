// add one to a number at the last of a linked list

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    while (head != nullptr)
    {
        cout << "element ->" << head->data << endl;
        head = head->next;
    }
}
struct node *reverse(struct node *head)
{
    struct node *previous = NULL;
    struct node *current = head;
    struct node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}

struct node *addone(struct node *head)
{
    head = reverse(head);
    struct node *current = head;
    // struct node *current = reverse(head); // not same
    // cout << "here is the value" << a->data << endl
    //      << endl;
    // cout << "value is " << current->data << endl
    //      << endl;
    while (current != NULL)
    {
        if (current->data == 9 && current->next == NULL)
        {
            current->data = 0;
            struct node *a = new node;
            a->data = 1;
            current->next = a;
            break;
        }
        else if (current->data < 9)
        {
            current->data = current->data + 1;
            break;
        }
        else if (current->data == 9 && current->next != NULL)
        {
            current->data = 0;
            current = current->next;
        }
    }
    head = reverse(head);
    return head;
}
int main()
{
    struct node *head = new node;
    struct node *second = new node;
    struct node *third = new node;
    struct node *forth = new node;
    struct node *fifth = new node;
    struct node *sixth = new node;
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = forth;
    forth->data = 4;
    forth->next = fifth;
    fifth->data = 5;
    fifth->next = nullptr;
    traversal(head);
    cout << "lokesh pandey ache ho app" << endl;
    // node *a = reverse(head);
    // struct node *b = reverse(head);
    // traversal(b);
    struct node *a = addone(head);
    traversal(a);

    return 0;
}
