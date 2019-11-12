#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isSub(string s1,string s2){
	int i,j;
	for(i=0, j=0;i<s1.size();i++){
			if(s1[i]==s2[j]){
				j++;
			}
	}
	if(s1.size()==j)
		return true;
	else
		return false;
}

int main(){
	int  t;cin>>t;
	while(t--){
		string m,w;
		cin>>m>>w;
		if(isSub(m,w) || isSub(w,m)){
			cout<<"YES";
		}
		else
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}	