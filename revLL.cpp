#include<iostream>
using namespace std;

struct node{
	int data;
	node* next=NULL;
};

node* getnewNode(int data){
	node* newnode=new node;
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}

node* insert(node* head,int data){
	if(head==NULL){
		head=getnewNode(data);
		return head;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=getnewNode(data);
	return head;
}

node* revLL(node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	node* temp=revLL(head->next);
	head->next->next=head;
	head->next=NULL;
	return temp;
}
 
void printLL(node* head){
	if(head==NULL){
		return;
	}
	cout<<head->data<< "  ";
	printLL(head->next);
}

int main(){
	node* head=NULL;
	head=insert(head,4);
	head=insert(head,2);
	head=insert(head,1);
	head=insert(head,6);
	head=insert(head,3);
	head=insert(head,5);
	printLL(head);
	head=revLL(head);
	cout<<endl;
	printLL(head);
}