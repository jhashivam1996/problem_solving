#include<iostream>
using namespace std;

struct node{
	int data;
	node* right;
	node* left;
};

node* newNode(int data){
	node* newnode=new node;
	newnode->data=data;
	newnode->right=NULL;
	newnode->left=NULL;
	return newnode;
}


node* LCA(node* root,int n1,int n2){
	if(root==NULL){
		return root;
	}
	if(root->data==n1 || root->data==n2){
		return root;
	}
	
	node* left_lca=LCA(root->left,n1,n2);
	node* right_lca=LCA(root->right,n1,n2);
	if(left_lca && right_lca){
		return root;
	}
	return (left_lca!=NULL)?left_lca:right_lca;
}

int main(){

	node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);	
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	root->right->left=newNode(6);
	root->right->right=newNode(7);
	cout<<LCA(root,2,4)->data;
	
	return 0;
}


