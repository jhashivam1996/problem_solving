#include<iostream>
using namespace std;


bool isAnagram(string s1,string s2 ,int i,int j){
	if(i==s1.size() || j==s2.size()){
		return false;
	}
	if(s1[i]==s2[j]){
		return  true;
	}else{
		return false;
	}	
	isAnagram(s1,s2,i+1,j+1);
}

int main(){
		string s1="army";
		string s2="ramy";
		cout<<isAnagram(s1,s2,0,0);
}