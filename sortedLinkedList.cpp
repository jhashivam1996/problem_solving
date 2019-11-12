#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *sortedLinkedList(Node *head_ref, int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;

    if (head_ref == NULL || (head_ref)->data >= new_node->data)
    {
        new_node->next = head_ref;
        head_ref = new_node;
    }
    else
    {

        Node *current = head_ref;
        while (current->next != NULL &&
               current->next->data < new_node->data)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
    return head_ref;
}

void printList(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    printList(head->next);
}

main()
{
    Node *head = NULL;
    head = sortedLinkedList(head, 50);
    head = sortedLinkedList(head, 5);
    head = sortedLinkedList(head, 2);
    head = sortedLinkedList(head, 10);
    head = sortedLinkedList(head, 60);
    printList(head);
    return 0;
}