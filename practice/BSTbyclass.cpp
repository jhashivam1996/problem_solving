#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;
};

class BST
{
public:
    node *root;
    BST()
    {
        root = NULL;
    }
    void insertItem(int x)
    {
        node *p = new node;
        p->left = p->right = NULL;
        p->data = x;
        node *q = root, *pq = NULL;
        if (root == NULL)
        {
            root = p;
            return;
        }
        while (q != NULL)
        {
            pq = q;
            if (x < q->data)
                q = q->left;
            else
                q = q->right;
        }

        if (x < pq->data)
            pq->left = p;
        else
            pq->right = p;
    }

    void printList(node *root)
    {
        if (root == NULL)
            return;
        printList(root->left);
        cout << root->data << " ";
        printList(root->right);
    }
    void printLevel(node *root, int n)
    {
        if (n == 1)
        {
            if (root != NULL)
                cout << root->data << " ";
            return;
        }
        printLevel(root->left, n - 1);
        printLevel(root->right, n - 1);
    }
};

main()
{
    BST t;
    t.insertItem(4);
    t.insertItem(2);
    t.insertItem(7);
    t.insertItem(3);
    t.insertItem(1);

    cout << "Tree set: ";
    t.printList(t.root);
    cout << "\nlevel: ";
    t.printLevel(t.root, 3);
}
