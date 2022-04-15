// finding the loop in an linked list;

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
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
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
    eight->next = head;
    // traversal1(head);
    cout << "pandey lokesh" << endl;
    cout << detectloop(head);
    return 0;
}

// void insertionSort(int arr[], int n)
// {
//     int i, key, j;
//     for (i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;

//         /* Move elements of arr[0..i-1], that are
//         greater than key, to one position ahead
//         of their current position */
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }