#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool f=false;
		for(int i=0;i<s.size()-1;i++){
			 
			if((s[i]=='C' && s[i+1]=='E') ||
				(s[i]=='C' && s[i+1]=='S') || 
				(s[i]=='E' && s[i+1]=='S') ||
				(s[i]==s[i+1])){
					f=true;
				}
				else{
					f=false;
					break;
				}
		}
		if(f)
			cout<<"yes";
		else
			cout<<"no";
		cout<<endl;
	}
}