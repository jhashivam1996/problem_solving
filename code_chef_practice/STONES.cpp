#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int  t;cin>>t;
	while(t--){
		string jj,s;
		cin>>jj>>s;
		int count=0;
		for(int i=0;i<s.size();i++){
			for(int j=0;j<jj.size();j++){
				if(s[i]==jj[j]){
					count++;
					break;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}	