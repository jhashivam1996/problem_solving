#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count=0;
		for(int i=0;i<s.size()-1;i++){
			if((s[i]=='0' && s[i+1]=='1')||
			   (s[i]=='1' && s[i+1]=='0')){
				   count++;
			   }
		}
		if(count<=2)
			cout<<"uniform";
		else
			cout<<"non-uniform";
		cout<<endl;
	}
	return 0;
}