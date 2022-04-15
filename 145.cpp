// remove duplicates from an unsorted linked list
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
void removeduplicatesunsortedll(struct node *head)
{
    struct node *ptr1 = head;
    struct node *ptr2 = head;
    struct node *duplicate;
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        while (ptr2->next != NULL)
        {
            if (ptr1->data == ptr2->next->data)
            {
                duplicate = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (duplicate);
            }
            else
            {
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
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
    forth->data = 1;
    forth->next = fifth;
    fifth->data = 5;
    fifth->next = six;
    six->data = 6;
    six->next = seven;
    seven->data = 7;
    seven->next = eight;
    eight->data = 1;
    eight->next = NULL;
    traversal(head);
    cout << "pandey lokesh" << endl;
    removeduplicatesunsortedll(head);
    traversal(head);

    return 0;
}