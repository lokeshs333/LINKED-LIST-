// C++ implementation to sort a k sorted doubly
// linked list

// not done man
#include <iostream>
using namespace std;

// a node of the doubly linked list
struct node
{
    int data;
    struct node *next;
    struct node *previous;
};
void printList(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
// function to sort a k sorted doubly linked list
struct node *sortAKSortedDLL(struct node *head, int k)
{

    // perform on all the nodes in list
    for (node *i = head->next; i != NULL; i = i->next)
    {
        node *j = i;
        // There will be atmost k swaps for each element in the list
        // since each node is k steps away from its correct position
        while (j->previous != NULL && j->previous->data > j->data)
        {
            // swap j and j.previous node
            node *temp = j->previous->previous;
            node *temp2 = j->previous;
            node *temp3 = j->next;
            j->previous->next = temp3;
            j->previous->previous = j;
            j->previous = temp;
            j->next = temp2;
            if (temp != NULL)
                temp->next = j;
            if (temp3 != NULL)
                temp3->previous = temp2;
        }
        // if j is now the new head
        // then reset head
        if (j->previous == NULL)
            head = j;
    }
    return head;
}

int main()
{
    // struct node *head = NULL;

    // Create the doubly linked list:
    // 3<->6<->2<->12<->56<->8
    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *forth = new node;
    node *fifth = new node;
    node *sixth = new node;
    head->data = 3;
    head->next = second;
    head->previous = NULL;
    second->data = 6;
    second->next = third;
    second->previous = head;
    third->data = 2;
    third->next = forth;
    third->previous = second;
    forth->data = 12;
    forth->next = fifth;
    forth->previous = third;
    fifth->data = 55;
    fifth->previous = forth;
    fifth->next = sixth;
    sixth->data = 8;
    sixth->previous = fifth;
    sixth->next = NULL;

    // traversal(head);

    int k = 2;

    cout << "Original Doubly linked list:\n";
    printList(head);

    // sort the biotonic DLL
    head = sortAKSortedDLL(head, k);

    cout << "\nDoubly linked list after sorting:\n";
    printList(head);

    return 0;
}

// This code is contributed by sachinejain74754.
