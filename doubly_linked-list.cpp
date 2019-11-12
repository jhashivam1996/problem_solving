#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
};

node* createNode(int x){
    node* p=new node;
    p->data=x;
    p->next=NULL;
    p->prev=NULL;

}


node* insertAtlocation(node *head,int x,int loc){
    node *newnode=createNode(x);
    if(head==NULL){
        head=newnode;
        return head;
    }
    node *temp=head;
    while(loc--){
        temp=temp->next->prev;
    }
    newnode->prev=temp->prev;
    newnode->next=temp;
    temp->prev->next=newnode;
    return head;

}

node* insertAtBegining(node* head,int data){
    node *newnode=createNode(data);
    if(head==NULL){
        head=newnode;
        return head;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;

    return head;
}
void printList(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void printReverse(node* head){
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }

}

main(){
    node* head=NULL;
    int n=5,loc=0,x;
    while(n--){
        head=insertAtBegining(head,n);
    }
    printList(head);
    cout<<"\n";
    printReverse(head);
    cout<<"\n";
    cout<<"\nEnter location for update: ";
    cin>>loc;
    if(loc>5){
        cout<<"Error:out of size\n";
    }
    else{
        n++;
        cout<<"Enter value: ";
        cin>>x;
        head=insertAtlocation(head,x,loc);
        cout<<"\nUpdated linked list: ";
        printList(head);
    }
}
