// removig loop in an linked list;

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    while (head != NULL)
    {
        cout << "element ->" << head->data << endl;
        head = head->next;
    }
}

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
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
void deleteloop(struct node *head)
{
    struct node *fast = head;
    struct node *slow = head;
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
        while (fast->next != slow)
        {
            fast = fast->next;
        }
        fast->next = NULL;
    }
    else if (slow == fast)
    {
        slow = head;
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = NULL;
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
    cout << "pandey lokesh" << endl;
    cout << detectloop(head);
    // traversal1(head);
    deleteloop(head);
    traversal(head);
    return 0;
}