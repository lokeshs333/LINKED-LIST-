// add two numbers represented by linked list
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
struct node *adddone(struct node *head)
{
    head = reverse(head);
    struct node *current = head;
    while (current != nullptr)
    {

        if (current->data == 9 && current->next == NULL)
        {
            current->data = 0;
            struct node *a = new node;
            current->next = a;
            break;
        }
        else if (current->data < 9)
        {
            current->data += 1;
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
struct node *addtwonumbers(struct node *first, struct node *second)
{
    first = reverse(first);
    second = reverse(second);
    int sum = 0;
    int carry = 0;
    node *temp;
    node *result = NULL;
    node *current = NULL;
    while (first != nullptr || second != nullptr)
    {
        sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        temp = new node;
        temp->data = sum;
        if (result == NULL)
        {
            result = temp;
        }
        else if (result != NULL)
        {
            current->next = temp;
            current = temp;
        }
        if (first)
        {
            first = first->next;
        }
        if (second)
        {
            second = second->next;
        }
    }

    // sxhsdgsjadgjagda
    // head = reverse(head);

    if (carry > 0)
    {
        temp = new node;
        temp->data = carry;
        current->next = temp;
        current = temp;
    }
    result = reverse(result);
    return result;
}
int main()
{
    struct node *head = new node;
    struct node *second = new node;
    struct node *third = new node;
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    struct node *head2 = new node;
    struct node *second2 = new node;
    head2->data = 2;
    head2->next = second2;
    second2->data = 9;
    second2->next = nullptr;

    struct node *a = addtwonumbers(head, head2);
    traversal(a);
    return 0;
}