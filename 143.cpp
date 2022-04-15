// starting point of loop in linked list

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

// void linkedListTraversal(struct node *head)
// {
//     struct node *ptr = head;
//     do
//     {
//         cout << ptr->data;
//         ptr = ptr->next;
//     } while (ptr != head);
// }
void traversal1(struct node *head)
{
    struct node *a = head;

    do
    {
        cout << "element ->" << a->data << endl;
        a = a->next;
    } while (a != head);
}
bool detectloop(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
void startingll(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }
    if (slow == head)
    {
        cout << "starting element is " << slow->data << endl;
    }
    else if (slow == fast)
    {
        slow = head;
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        cout << "starting element is ohohoho" << slow->next->data << endl;
    }
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
    eight->next = forth;
    // cout << "startin is " << a->data << endl;
    cout << "pandey lokesh" << endl;
    // traversal1(head);
    // struct node *a = startingpointofll(head);
    startingll(head);
    return 0;
}