#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    node *link;
};

node *createNode(int x)
{
    node *p = new node;
    p->data = x;
    p->link = NULL;
    return p;
}

node *insertAtBegining(node *head, int x)
{
    node *newnode = createNode(x);
    if (head == NULL)
    {
        head = newnode;
        return head;
    }
    newnode->link = head;
    head = newnode;
    return head;
}

node *insertAtlast(node *head, int x)
{
    node *newnode = createNode(x);
    node *temp = head;
    if (head == NULL)
    {
        head = newnode;
        return head;
    }
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = newnode;
    return head;
}

node *insertAtlocation(node *head, int x, int loc)
{
    node *newnode = createNode(x);
    if (head == NULL)
    {
        head = newnode;
        return head;
    }
    node *temp = head;
    while (loc > 2)
    {
        temp = temp->link;
        loc--;
    }
    newnode->link = temp->link;
    temp->link = newnode;
    return head;
}

node *deleteAtlocation(node *head, int loc)
{
    if (head == NULL)
    {
        cout << "\nList is empty";
        return head;
    }
    node *temp = head;
    for (int i = 0; i < loc - 2; i++)
        temp = temp->link;

    if (temp == NULL || temp->link == NULL)
        return head;

    node *next = temp->link->link;
    free(temp->link);
    temp->link = next;

    return head;
}

void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

node *reverseList(node *head)
{
    node *currNode, *nextNode = NULL, *prevNode = NULL;
    currNode = head;
    while (currNode != NULL)
    {
        nextNode = currNode->link;
        currNode->link = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    return prevNode;
}

void halfrev(node *head, int siz)
{
    node *temp, *currNode, *nextNode = NULL, *prevNode = NULL;
    int c = 0;
    temp = head;
    while (temp != NULL)
    {
        if (c == siz / 2)
        {
            currNode = temp;
            while (currNode != NULL)
            {
                nextNode = currNode->link;
                currNode->link = prevNode;
                prevNode = currNode;
                currNode = nextNode;
            }
            temp = prevNode;
            cout << temp->data << " ";
        }
        else
        {
            cout << temp->data << " ";
        }
        c++;
        temp = temp->link;
    }
}

int main()
{
    node *head = NULL, *revhead = NULL;
    int n = 5, loc = 0;
    int x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        head = insertAtlast(head, x);
    }
    cout << "\nOriginal linked list: ";
    printList(head);
    cout << "\nEnter location for update: ";
    cin >> loc;
    if (loc > n)
    {
        cout << "Error:out of size\n";
    }
    else
    {
        n++;
        cout << "Enter value: ";
        cin >> x;
        head = insertAtlocation(head, x, loc);
        cout << "\nUpdated linked list: ";
        printList(head);
    }

    //revhead=reverseList(head);
    // cout<<"\nReversed linked list: ";
    //printList(revhead);
    //cout<<"\nHalf-reversed linked list: ";
    //halfrev(head,n);
    int del_loc = 0;
    cout << "\nEnter location for deleting a element: ";
    cin >> del_loc;
    if (del_loc > n)
    {
        cout << "Error:out of size\n";
    }
    else
    {
        n--;
        head = deleteAtlocation(head, del_loc);
        cout << "\nUpdated linked list after deletion: ";
        printList(head);
    }
    return 0;
}
