// chexk wheather the linked list is palindrome or not

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != nullptr)
    {
        cout << "element is " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int count(struct node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
struct node *reverse(struct node *head)
{
    struct node *previous = NULL;
    struct node *next;
    struct node *current = head;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}
struct node *mod(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
bool ispalindrome(struct node *head)
{
}

int main()
{
    struct node *h1 = new node;
    struct node *s1 = new node;
    struct node *t1 = new node;
    struct node *f1 = new node;
    struct node *fifth = new node;
    struct node *sixth = new node;
    h1->data = 1;
    h1->next = s1;
    s1->data = 3;
    s1->next = t1;
    t1->data = 23;
    t1->next = f1;
    f1->data = 3;
    f1->next = fifth;
    fifth->data = 1;
    fifth->next = NULL;

    traversal(h1);
    int a = ispalindrome(h1);
    cout << "a is" << a << endl;
    cout << "myself lokesh pandey" << endl;

    cout << "myself lokesh pandey" << endl;
    cout << "myself lokesh pandey" << endl;

    return 0;
}