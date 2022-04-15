// program for the nth node of a linked list

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
void nthnodefromendofll(struct node *head, int k)
{
    struct node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    // cout << "no of element in ll is " << count << endl;
    k = count - k;
    // cout << "value for  is " << k << endl;

    while (k--)
    {
        head = head->next;
    }
    cout << "data is " << head->data << endl;
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

    head->data = 11;
    head->next = second;
    second->data = 12;
    second->next = third;
    third->data = 31;
    third->next = forth;
    forth->data = 14;
    forth->next = fifth;
    fifth->data = 51;
    fifth->next = six;
    six->data = 16;
    six->next = seven;
    seven->data = 71;
    seven->next = eight;
    eight->data = 18;
    eight->next = NULL;
    traversal(head);
    nthnodefromendofll(head, 2);
    return 0;
}