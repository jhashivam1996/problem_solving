#include<iostream>
#include<queue>
#include<math.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* createNode(int x){
    node* p=new node;
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}

node* createTree(int x,node* temp){
    if(temp==NULL){
        temp=createNode(x);
    }
    else if(x>temp->data)
        temp->right=createTree(x,temp->right);
    else
        temp->left=createTree(x,temp->left);
    return temp;
}

void inorderTraversal(node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

void breadthFirstTraversal(node* root){
    if(root==NULL){
        return;
    }
    queue<node*> q;
    q.push(root);
    int level=1;
    int coun=1;
    while(!q.empty()){
        if(coun==pow(2,level-1)){
             cout<<"\nElements at level "<<level<<": ";
             level++;
        }
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
        coun++;
    }
    cout<<"\nTotal Number of levels: "<<level-1;
}


node* findMin(node* root){
    if(root== NULL)
        return root;
    node* succ=root;
    while(succ->left!=NULL){
         succ=succ->left;
    }
    return succ;
}

node* insertNodeInBetween(node* root,int x){
    if(root==NULL){
        return root;
    }

}

node* deleteNode(node* root,int key){
    if(root==NULL)
        return root;

    if(key<root->data){
        root->left=deleteNode(root->left,key);
    }
    else if(key>root->data){
        root->right=deleteNode(root->right,key);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
        }
        else if(root->left==NULL){
            node* temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL){
            node* temp=root;
            root=root->left;
            delete temp;
        }
        else{
            node* temp=findMin(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }
    }
    return root;
}


int main(){
    node *root=NULL;
    root=createTree(1,root);
    root=createTree(2,root);
    root=createTree(3,root);
    root=createTree(78,root);
    root=createTree(154,root);
    root=createTree(45,root);
    root=createTree(79,root);
    root=createTree(47,root);
    root=createTree(42,root);
    root=createTree(25,root);
    root=createTree(41,root);
    root=createTree(12,root);
    root=createTree(56,root);
    root=createTree(15,root);
    root=createTree(49,root);
    root=createTree(50,root);
    cout<<"Inorder Traversal: ";
    inorderTraversal(root);
    cout<<"\n\nLevel Order Traversal: ";
    breadthFirstTraversal(root);
    root=deleteNode(root,154);
    cout<<"\n\nLevel Order Traversal: ";
    breadthFirstTraversal(root);
    return 0;
}
