#include<iostream>
using namespace std;

struct trie{
	trie* children[10];
	bool end;
};

trie* getNewNode(){
	trie* t=new trie;
	for(int i=0;i<10;i++){
		t->children[i]=NULL;
	}
	t->end=false;
	return t;
}

trie* insert(trie* root,string s){
	if(root==NULL){
		root=getNewNode();
	}
	trie* temp=root;
	for(int i=0;i<s.length();i++){
		int ind=s[i]-'0';
		if(temp->children[ind]==NULL){
			temp->children[ind]=getNewNode();
		}
		temp=temp->children[ind];
	}
	temp->end=true;
	return root;
}

bool isPresent(trie *root,string s){
	if(root==NULL){
		return false;
	}
	trie* temp=root;
	for(int i=0;i<s.length();i++){
		int ind=s[i]-'0';
		if(temp->children[ind]==NULL){
			 return false;;
		}
		temp=temp->children[ind];
	}
	return (temp!=NULL && temp->end==true)?true:false; 
}

int main(){
	trie* root=NULL;
	string s[]={"4541545478","4541544578","4541545465"};
	for(int i=0;i<3;i++){
		root=insert(root,s[i]);
	}
	cout<<isPresent(root,"4541545478");
}