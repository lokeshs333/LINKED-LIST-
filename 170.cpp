// multiply the two linked list

#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void traversal(struct node *head)
{
    while (head != NULL)
    {
        cout << "element is " << head->data << endl;
        head = head->next;
    }
}
void multiply(struct node *head1, node *head2)
{
    int num1 = 0;
    int num2 = 0;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1 != NULL)
        {
            num1 = num1 * 10 + head1->data;
            head1 = head1->next;
        }
        if (head2 != NULL)
        {
            num2 = num2 * 10 + head2->data;
            head2 = head2->next;
        }
    }
    cout << "num 1 is " << num1 << endl;
    cout << "num 2 is " << num2 << endl;
    long result = num1 * num2;
    cout << "multiplication value is " << result << endl;
}
int main()
{
    struct node *head = new (struct node);
    struct node *second = new (struct node);
    struct node *third = new (struct node);
    struct node *head2 = new (struct node);
    struct node *second2 = new (struct node);
    struct node *third2 = new (struct node);

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    // skska
    head2->data = 4;
    head2->next = second2;
    second2->data = 2;
    second2->next = third2;
    third2->data = 1;
    third2->next = NULL;
    traversal(head);
    traversal(head2);
    multiply(head, head2);
    return 0;
}