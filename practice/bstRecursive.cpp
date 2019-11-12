#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct node
{
    int data;
    node *left, *right;
};

node *insertItem(node *root, int x)
{
    node *p = new node;
    p->data = x;
    p->left = p->right = NULL;
    if (root == NULL)
    {
        root = p;
    }
    else if (x < root->data)
        root->left = insertItem(root->left, x);
    else
        root->right = insertItem(root->right, x);
    return root;
}

void printTree(node *root)
{
    if (root == NULL)
        return;
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}

void iteratePrint(node *root)
{
    stack<node *> s;
    node *curr = root;

c:
    while (curr != NULL)
    {
        s.push(curr);
        curr = curr->left;
    }
    if (curr == NULL && !s.empty())
    {
        node *temp = s.top();
        s.pop();
        curr = temp->right;
        cout << temp->data << " ";
        goto c;
    }
}

void printLevel(node *root, int n)
{
    if (root == NULL)
        return;
    if (n == 1)
    {
        cout << root->data << " ";
    }
    else if (n > 1)
    {
        printLevel(root->left, n - 1);
        printLevel(root->right, n - 1);
    }
}

int height(node *root)
{
    if (root != NULL)
    {
        return 1 + max(height(root->left), height(root->right));
    }
}

void treeByLevel(node *root)
{
    for (int i = 1; i <= height(root); i++)
    {
        cout << "Level " << i << ": ";
        printLevel(root, i);
        cout << endl;
    }
}

void treeByLevelQ(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
}
void mirror(node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        node *temp;
        mirror(root->left);
        mirror(root->right);
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}
main()
{
    node *root = NULL;
    root = insertItem(root, 4);
    root = insertItem(root, 1);
    root = insertItem(root, 3);
    root = insertItem(root, 2);
    root = insertItem(root, 7);
    root = insertItem(root, 78);
    root = insertItem(root, 84);
    root = insertItem(root, 54);
    root = insertItem(root, 25);
    root = insertItem(root, 40);

    cout << "Inorder: ";
    printTree(root);
    mirror(root);
    cout << endl;
    printTree(root);
}
