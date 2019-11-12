#include<iostream>
using namespace std;

struct node{
    int data;
    node *left,*right;
};

node* insertItem(node *root,int x){
    node *p=new node;
    p->data=x;
    p->left=p->right=NULL;

    if(root==NULL){
        root=p;
        return root;
    }
    node *q=root,*pq=NULL;
    while(q!=NULL){
        pq=q;
        if(x>q->data)
            q=q->right;
        else
            q=q->left;
    }

    if(x>pq->data)
        pq->right=p;
    else
        pq->left=p;
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
    node* root=NULL;
    root=insertItem(root,4);
    root=insertItem(root,8);
    root=insertItem(root,5);
    root=insertItem(root,3);
    root=insertItem(root,2);
    root=insertItem(root,7);
    root=insertItem(root,78);
    root=insertItem(root,84);
    root=insertItem(root,54);
    root=insertItem(root,25);
    root=insertItem(root,40);

    printTree(root);

}
