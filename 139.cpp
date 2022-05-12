

// reversing the linked list
//heya....
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
}
struct node *reverse(struct node *head)
{
    struct node *previous = NULL;
    struct node *current = head;
    struct node *nextt;
    while (current != NULL)
    {
        nextt = current->next;
        current->next = previous;
        previous = current;
        current = nextt;
    }
    return previous;
}
int main()
{
    struct node *head = new (struct node);
    struct node *second = new (struct node);
    struct node *third = new (struct node);
    struct node *forth = new (struct node);
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = forth;
    forth->data = 4;
    forth->next = NULL;
    traversal(head);
    cout << "pandey lokesh " << endl;
    struct node *a = reverse(head);
    traversal(a);
    return 0;
}
