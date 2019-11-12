#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.size()==2){
			cout<<"YES"<<endl;
			return 0;
		}
		map<char,int> mp;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		int count=0;
		for(int i=0;i<s.size();i++){
			if(mp[s[i]]!=1){
				count++;
			}
			if(count==2){
				break;
			}
		}
		if(count!=0){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}	 
	return 0;
}	