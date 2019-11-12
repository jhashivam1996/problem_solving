#include<iostream>
using namespace std;

struct node{
    int data;
    node *left,*right;
};

node* insertItem(node *root,int x){
    node* p=new node;
    p->data=x;
    p->left=p->right=NULL;
    if(root==NULL){
        root=p;
    }
    else if(x<root->data)
        root->left=insertItem(root->left,x);
    else
        root->right=insertItem(root->right,x);
    return root;
}

void printTree(node* root){
    if(root==NULL)
        return;
    printTree(root->left);
    cout<<root->data<<" ";
    printTree(root->right);
}

main(){
    node *root=NULL;
    root=insertItem(root,4);
    root=insertItem(root,1);
    root=insertItem(root,3);
    root=insertItem(root,2);
    root=insertItem(root,7);

    printTree(root);
}
