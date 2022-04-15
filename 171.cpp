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
node *reverse(struct node *head)
{
    node *previous = NULL;
    node *current = head;
    node *nex;
    while (current != NULL)
    {
        nex = current->next;
        current->next = previous;
        previous = current;
        current = nex;
    }
    return previous;
}

node *reverselist(node *head)
{
    node *prev, *curr, *next;
    prev = 0;
    curr = next = head;
    while (next != NULL)
    {
        next = next->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node *compute(node *head)
{
    head = reverselist(head);
    node *prev, *next;
    prev = head;
    next = head->next;
    int ma = head->data;

    while (next != NULL)
    {
        if (next->data >= ma)
        {
            ma = next->data;
            prev = next;
            next = next->next;
        }
        else
        {
            prev->next = next->next;
            next = prev->next;
        }
    }
    head = reverselist(head);
    return head;
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

    head->data = 12;
    head->next = second;
    second->data = 15;
    second->next = third;
    third->data = 10;
    third->next = forth;
    forth->data = 11;
    forth->next = fifth;
    fifth->data = 5;
    fifth->next = six;
    six->data = 6;
    six->next = seven;
    seven->data = 2;
    seven->next = eight;
    eight->data = 3;
    eight->next = NULL;
    traversal(head);
    cout << "lokesh pandey have a good day man " << endl;
    // node *a = reverse(head);
    // cout << a->data;
    // traversal(a);
    node *a = compute(head);
    traversal(a);

    return 0;
}