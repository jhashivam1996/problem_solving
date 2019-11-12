#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
	int  t;cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		int count=0;
		for (int i = 0; i < n; i++)  
			for (int len = 1; len <= n - i; len++){
				string str=s.substr(i, len);
				if(str[0]=='1' && str[str.size()-1]=='1' ){
						count++;
				} 
			} 
		cout<<count<<endl;
	}
	return 0;
}	