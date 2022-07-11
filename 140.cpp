// reverse a linked list in group of given size..
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
};
struct node *reverse(struct node *head)
{
    struct node *current = head;
    struct node *previous = NULL;
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
struct node *groupreverse(struct node *head, int k)
{

    int count = 0;
    struct node *current = head;
    struct node *previous = NULL;
    struct node *nextt;
    while (current != NULL && count < k)
    {
        nextt = current->next;
        current->next = previous;
        previous = current;
        current = nextt;
        ++count;
    }
    if (nextt != NULL)
    {

        head->next = groupreverse(nextt, k);
    }
    return previous;
}
// struct node *groupreverse(struct node *head, int k)
// {
//     struct node *previous = NULL;

//     struct node *current = head;
//     struct node *nextt;
//     int count = 0;
//     while (current != NULL && count < k)
//     {
//         nextt = current->next;
//         current->next = previous;
//         previous = current;
//         current = nextt;
//         ++count;
//     }
//     if (nextt != NULL)
//     {
//         head->next = groupreverse(current, k);
//     }
//     return previous;
// }

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

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = forth;
    forth->data = 4;
    forth->next = fifth;
    fifth->data = 5;
    fifth->next = six;
    six->data = 6;
    six->next = seven;
    seven->data = 7;
    seven->next = eight;
    eight->data = 8;
    eight->next = NULL;
    traversal(head);
    cout << "pandey lokesh" << endl;
    // reverse(head);
    // struct node *a = reverse(head);
    // traversal(a);
    struct node *b = groupreverse(head, 3);
    traversal(b);
    return 0;
}
